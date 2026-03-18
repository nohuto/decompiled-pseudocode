/*
 * XREFs of ?BltValidInit@@YAHPEAUtagSMWP@@@Z @ 0x1C0067FFC
 * Callers:
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C0067354 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     ?IsStillWindowC@@YAHPEAUHWND__@@@Z @ 0x1C0068128 (-IsStillWindowC@@YAHPEAUHWND__@@@Z.c)
 *     ?SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C0090160 (-SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 *     ?PreventInterMonitorBlts@@YAXPEAUtagCVR@@@Z @ 0x1C01AAEC8 (-PreventInterMonitorBlts@@YAXPEAUtagCVR@@@Z.c)
 *     SpbCheckRect @ 0x1C01F0058 (SpbCheckRect.c)
 */

__int64 __fastcall BltValidInit(struct tagSMWP *a1, __int64 a2)
{
  unsigned int v2; // esi
  __int64 v3; // rbx
  int v4; // ebp
  int v5; // edi
  int v6; // r14d
  __int64 v7; // r15
  HRGN EmptyRgn; // rax

  v2 = 0;
  v3 = *((_QWORD *)a1 + 5);
  v4 = 0;
  v5 = *((_DWORD *)a1 + 7) - 1;
  if ( v5 < 0 )
    return 0;
  do
  {
    *(_QWORD *)(v3 + 96) = 0LL;
    v6 = *(_DWORD *)(v3 + 32);
    if ( *(_QWORD *)v3 )
    {
      LOBYTE(a2) = 1;
      v7 = HMValidateHandleNoSecure(*(_QWORD *)v3, a2);
      if ( v7 && (unsigned int)IsStillWindowC(*(HWND *)(v3 + 8)) )
      {
        if ( *(_QWORD *)(gpDispInfo + 24LL) && (v6 & 8) == 0 )
          SpbCheckRect((struct tagWND *)v7, (struct tagRECT *)(v7 + 128), 1u);
        ++v2;
        if ( (v6 & 0x18E7) != 0x1807 )
          v4 = 1;
        if ( (*(_DWORD *)(v3 + 32) & 8) == 0 )
        {
          if ( !*(_DWORD *)(gpsi + 2204LL) )
            PreventInterMonitorBlts((struct tagCVR *)v3);
          *(_DWORD *)(v3 + 88) = 0;
          EmptyRgn = (HRGN)CreateEmptyRgn();
          *(_QWORD *)(v3 + 96) = EmptyRgn;
          if ( !EmptyRgn || !(unsigned int)SwpCalcVisRgn((struct tagWND *)v7, EmptyRgn) )
            *(_DWORD *)(v3 + 88) = 2;
        }
      }
      else
      {
        *(_QWORD *)v3 = 0LL;
        *(_DWORD *)(v3 + 32) = 6159;
      }
    }
    v3 += 168LL;
    --v5;
  }
  while ( v5 >= 0 );
  if ( !v4 )
    return 0;
  return v2;
}
