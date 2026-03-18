/*
 * XREFs of IopLiveDumpMirrorPhysicalMemoryCallback @ 0x1404828A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlSetBitsEx @ 0x1400DA370 (RtlSetBitsEx.c)
 *     MmTryIdentifyPage @ 0x140255324 (MmTryIdentifyPage.c)
 *     RtlFindNextForwardRunClearEx @ 0x1402882D0 (RtlFindNextForwardRunClearEx.c)
 */

__int64 __fastcall IopLiveDumpMirrorPhysicalMemoryCallback(unsigned __int64 a1, __int64 a2)
{
  __int64 v2; // r15
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  bool v8; // cf
  unsigned __int64 NextForwardRunClear; // rax
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rbp
  unsigned __int64 v14; // r12
  __int64 v15; // rcx
  _QWORD v17[2]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v18[2]; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v19; // [rsp+40h] [rbp-38h]
  unsigned __int64 v20; // [rsp+80h] [rbp+8h] BYREF

  v2 = IopLiveDumpContext;
  v3 = a1 >> 12;
  v4 = *(_QWORD *)(IopLiveDumpContext + 400);
  v5 = (a2 >> 12) + ((a2 & 0xFFF) != 0);
  v6 = v5 + (a1 >> 12);
  v7 = v6 - 1;
  if ( v3 < v4 )
  {
    v8 = v7 < v4;
    if ( v7 >= v4 )
    {
      v5 = v4 - v3;
      v8 = v7 < v4;
    }
    if ( v8 )
      v4 = v6;
    if ( v5 )
    {
      v17[0] = v4;
      v17[1] = *(_QWORD *)(IopLiveDumpContext + 408);
      while ( 1 )
      {
        NextForwardRunClear = RtlFindNextForwardRunClearEx((__int64)v17, v3, &v20);
        v10 = v20;
        v11 = NextForwardRunClear;
        v12 = NextForwardRunClear ? v20 - v3 : v5;
        if ( v12 )
          break;
LABEL_22:
        if ( v5 <= v12 + v11 )
        {
          v5 = 0LL;
        }
        else
        {
          v5 -= v12 + v11;
          v3 = v11 + v10;
        }
        if ( !v5 )
          return 0LL;
      }
      v13 = v3;
      v14 = v12;
      while ( 1 )
      {
        v18[0] = 0LL;
        v18[1] = 0LL;
        v19 = 0LL;
        if ( !(unsigned int)MmTryIdentifyPage(v13, v18) || (v18[0] & 0x70) < 0x60 )
          goto LABEL_21;
        if ( v19 < 0xFFFF800000000000uLL )
        {
          if ( (*(_DWORD *)(v2 + 40) & 4) == 0 || v19 - 1 > 0x7FFFFFFEFFFELL )
            goto LABEL_21;
          v15 = v2 + 464;
        }
        else
        {
          v15 = v2 + 424;
        }
        RtlSetBitsEx(v15, v13, 1uLL);
LABEL_21:
        ++v13;
        if ( !--v14 )
          goto LABEL_22;
      }
    }
  }
  return 0LL;
}
