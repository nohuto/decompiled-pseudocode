/*
 * XREFs of IopLiveDumpMirrorPhysicalMemoryCallback @ 0x14042BD80
 * Callers:
 *     <none>
 * Callees:
 *     RtlSetBitsEx @ 0x1400C2EE0 (RtlSetBitsEx.c)
 *     MmTryIdentifyPage @ 0x1402185D4 (MmTryIdentifyPage.c)
 *     RtlFindNextForwardRunClearEx @ 0x140252A10 (RtlFindNextForwardRunClearEx.c)
 */

__int64 __fastcall IopLiveDumpMirrorPhysicalMemoryCallback(unsigned __int64 a1, __int64 a2)
{
  __int64 v2; // r13
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rax
  unsigned __int64 NextForwardRunClear; // r15
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // r12
  __int64 v11; // rcx
  _QWORD v13[2]; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v14[2]; // [rsp+30h] [rbp-20h] BYREF
  unsigned __int64 v15; // [rsp+40h] [rbp-10h]
  unsigned __int64 v16; // [rsp+80h] [rbp+30h] BYREF

  v2 = IopLiveDumpContext;
  v3 = a1 >> 12;
  v4 = *(_QWORD *)(IopLiveDumpContext + 400);
  v5 = (a2 >> 12) + ((a2 & 0xFFF) != 0);
  v6 = v5 + v3 - 1;
  if ( v3 < v4 )
  {
    if ( v6 >= v4 )
    {
      v6 = v4 - 1;
      v5 = v4 - v3;
    }
    if ( v5 )
    {
      v13[0] = v6 + 1;
      v13[1] = *(_QWORD *)(IopLiveDumpContext + 408);
      while ( 1 )
      {
        NextForwardRunClear = RtlFindNextForwardRunClearEx((__int64)v13, v3, &v16);
        v8 = NextForwardRunClear ? v16 - v3 : v5;
        if ( v8 )
          break;
LABEL_20:
        if ( v5 <= v8 + NextForwardRunClear )
        {
          v5 = 0LL;
        }
        else
        {
          v3 = NextForwardRunClear + v16;
          v5 -= v8 + NextForwardRunClear;
        }
        if ( !v5 )
          return 0LL;
      }
      v9 = v3;
      v10 = v8;
      while ( 1 )
      {
        v14[0] = 0LL;
        v14[1] = 0LL;
        v15 = 0LL;
        if ( !(unsigned int)MmTryIdentifyPage(v9, v14) || (v14[0] & 0x70) < 0x60 )
          goto LABEL_19;
        if ( v15 < 0xFFFF800000000000uLL )
        {
          if ( (*(_DWORD *)(v2 + 40) & 4) == 0 || v15 - 1 > 0x7FFFFFFEFFFELL )
            goto LABEL_19;
          v11 = v2 + 464;
        }
        else
        {
          v11 = v2 + 424;
        }
        RtlSetBitsEx(v11, v9, 1uLL);
LABEL_19:
        ++v9;
        if ( !--v10 )
          goto LABEL_20;
      }
    }
  }
  return 0LL;
}
