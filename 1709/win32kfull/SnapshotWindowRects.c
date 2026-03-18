/*
 * XREFs of SnapshotWindowRects @ 0x1C01B89F0
 * Callers:
 *     SnapShotDesktopsMonitorsAndWindowsRects @ 0x1C01B892C (SnapShotDesktopsMonitorsAndWindowsRects.c)
 * Callees:
 *     DesktopWindowFromDesktop @ 0x1C004979C (DesktopWindowFromDesktop.c)
 *     FreeHwndList @ 0x1C006F360 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C006F3E0 (BuildHwndList.c)
 *     _GetProp @ 0x1C0076208 (_GetProp.c)
 *     IsNonImmersiveBand @ 0x1C009DE0C (IsNonImmersiveBand.c)
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall SnapshotWindowRects(__int64 a1, _DWORD *a2)
{
  int v2; // ebx
  __int64 v4; // rax
  struct tagBWL *v5; // rax
  struct tagBWL *v6; // rbp
  unsigned __int64 *v7; // rdi
  bool v8; // zf
  _QWORD *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rsi
  unsigned __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int16 v19; // dx
  __int128 *Prop; // rax
  __int128 v21; // xmm0

  v2 = 0;
  *a2 = 0;
  v4 = DesktopWindowFromDesktop(a1);
  v5 = BuildHwndList(*(_QWORD *)(v4 + 112), (struct tagWND *)2, 0LL);
  v6 = v5;
  if ( v5 )
  {
    v7 = (unsigned __int64 *)((char *)v5 + 32);
    v8 = *((_QWORD *)v5 + 4) == 1LL;
    v9 = (_QWORD *)((char *)v5 + 32);
    if ( v8 )
      goto LABEL_20;
    do
    {
      ++v2;
      ++v9;
    }
    while ( *v9 != 1LL );
    if ( v2 && (v10 = Win32AllocPoolWithQuotaZInit(48LL * v2, 2004054869LL), (v14 = v10) != 0) )
    {
      v15 = *v7;
      if ( *v7 != 1 )
      {
        v16 = v10 + 32;
        do
        {
          LOBYTE(v11) = 1;
          v17 = HMValidateHandleNoSecure(v15, v11, v12, v13);
          v13 = v17;
          if ( v17 )
          {
            if ( *(char *)(v17 + 64) >= 0 && IsNonImmersiveBand(v17) )
            {
              v11 = *(_QWORD *)(*(_QWORD *)(v18 + 16) + 400LL);
              if ( (*(_DWORD *)(v11 + 776) & 0x30) != 0x10 )
              {
                v19 = atomCheckpointProp;
                *(_QWORD *)(v16 + 8) = *v7;
                *(_OWORD *)(v16 - 32) = *(_OWORD *)(v13 + 128);
                Prop = (__int128 *)GetProp(v13, v19, 1);
                if ( Prop )
                {
                  v21 = *Prop;
                  *(_DWORD *)v16 |= v12;
                  *(_OWORD *)(v16 - 16) = v21;
                }
                else
                {
                  *(_DWORD *)v16 &= ~1u;
                }
                ++*a2;
                v16 += 48LL;
              }
            }
          }
          v15 = *++v7;
        }
        while ( *v7 != 1 );
      }
      if ( *a2 )
        return v14;
      Win32FreePool(v14, v11, v12);
    }
    else
    {
LABEL_20:
      FreeHwndList(v6);
    }
  }
  return 0LL;
}
