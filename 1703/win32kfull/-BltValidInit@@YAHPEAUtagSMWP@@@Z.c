/*
 * XREFs of ?BltValidInit@@YAHPEAUtagSMWP@@@Z @ 0x1C00682F4
 * Callers:
 *     ?zzzBltValidBits@@YAHPEAUtagSMWP@@@Z @ 0x1C00636D0 (-zzzBltValidBits@@YAHPEAUtagSMWP@@@Z.c)
 * Callees:
 *     ?SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C0025E60 (-SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 *     ?IsStillWindowC@@YAHPEAUHWND__@@@Z @ 0x1C0068410 (-IsStillWindowC@@YAHPEAUHWND__@@@Z.c)
 *     ?PreventInterMonitorBlts@@YAXPEAUtagCVR@@@Z @ 0x1C01A3974 (-PreventInterMonitorBlts@@YAXPEAUtagCVR@@@Z.c)
 *     SpbCheckRect @ 0x1C01E4040 (SpbCheckRect.c)
 */

__int64 __fastcall BltValidInit(struct tagSMWP *a1)
{
  unsigned int v1; // esi
  __int64 v2; // rbx
  int v3; // ebp
  int v4; // edi
  int v5; // r14d
  __int64 v6; // r15
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v11; // rcx
  HRGN EmptyRgn; // rax

  v1 = 0;
  v2 = *((_QWORD *)a1 + 5);
  v3 = 0;
  v4 = *((_DWORD *)a1 + 7) - 1;
  if ( v4 < 0 )
    return 0;
  do
  {
    *(_QWORD *)(v2 + 96) = 0LL;
    v5 = *(_DWORD *)(v2 + 32);
    if ( *(_QWORD *)v2 )
    {
      v6 = HMValidateHandleNoSecure(*(_QWORD *)v2, 1);
      if ( v6 && (unsigned int)IsStillWindowC(*(HWND *)(v2 + 8)) )
      {
        if ( *(_QWORD *)(gpDispInfo + 24LL) && (v5 & 8) == 0 )
          SpbCheckRect((struct tagWND *)v6, (struct tagRECT *)(v6 + 128), 1u);
        ++v1;
        if ( (v5 & 0x18E7) != 0x1807 )
          v3 = 1;
        if ( (*(_DWORD *)(v2 + 32) & 8) == 0 )
        {
          v11 = gpsi;
          if ( !*(_DWORD *)(gpsi + 2204LL) )
            PreventInterMonitorBlts((struct tagCVR *)v2);
          *(_DWORD *)(v2 + 88) = 0;
          EmptyRgn = (HRGN)CreateEmptyRgn(v11, v7, v8, v9);
          *(_QWORD *)(v2 + 96) = EmptyRgn;
          if ( !EmptyRgn || !(unsigned int)SwpCalcVisRgn((struct tagWND *)v6, EmptyRgn) )
            *(_DWORD *)(v2 + 88) = 2;
        }
      }
      else
      {
        *(_QWORD *)v2 = 0LL;
        *(_DWORD *)(v2 + 32) = 6159;
      }
    }
    v2 += 168LL;
    --v4;
  }
  while ( v4 >= 0 );
  if ( !v3 )
    return 0;
  return v1;
}
