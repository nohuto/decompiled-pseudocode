/*
 * XREFs of RequestPendingCompletion @ 0x1C000108C
 * Callers:
 *     NVMeHwInterrupt @ 0x1C0002750 (NVMeHwInterrupt.c)
 *     NVMeHwMSIInterrupt @ 0x1C00027B0 (NVMeHwMSIInterrupt.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C0011F28 (WaitForCommandCompleteWithCustomTimeout.c)
 * Callees:
 *     <none>
 */

bool __fastcall RequestPendingCompletion(__int64 a1, unsigned __int16 a2)
{
  __int64 v3; // rbx
  _WORD *v4; // rdx
  bool v5; // r14
  __int16 v6; // r15
  unsigned __int16 v7; // r12
  __int16 v8; // cx
  __int64 v9; // r9
  unsigned int v10; // r8d
  __int16 v11; // cx
  unsigned __int16 v12; // cx
  unsigned __int16 v13; // r13
  _QWORD *v14; // rax
  __int64 v15; // rsi
  unsigned int v16; // edx
  __int64 v17; // rsi
  int v18; // edx
  int v19; // ecx
  __int64 v21; // [rsp+20h] [rbp-28h]
  __int64 v22; // [rsp+60h] [rbp+18h] BYREF

  if ( a2 == 0xFFFF )
  {
    v3 = a1 + 384;
    v4 = (_WORD *)(*(_QWORD *)(a1 + 384) + 16LL * *(unsigned __int16 *)(a1 + 482));
    v8 = v4[7] & 1;
    v5 = v8 != *(_WORD *)(v3 + 100);
    if ( v8 == *(_WORD *)(v3 + 100) )
    {
      v9 = *(_QWORD *)(a1 + 560);
      v10 = 0;
      if ( v9 )
      {
        while ( v10 < *(unsigned __int16 *)(a1 + 242) )
        {
          v3 = v9 + 168LL * v10;
          v4 = (_WORD *)(*(_QWORD *)v3 + 16LL * *(unsigned __int16 *)(v3 + 98));
          v11 = v4[7] & 1;
          v5 = v11 != *(_WORD *)(v3 + 100);
          if ( v11 != *(_WORD *)(v3 + 100) )
            break;
          ++v10;
        }
      }
    }
  }
  else
  {
    if ( a2 )
      v3 = 168LL * a2 + *(_QWORD *)(a1 + 560) - 168LL;
    else
      v3 = a1 + 384;
    v4 = (_WORD *)(*(_QWORD *)v3 + 16LL * *(unsigned __int16 *)(v3 + 98));
    v5 = (v4[7] & 1) != *(_WORD *)(v3 + 100);
  }
  if ( v5 && (*(_DWORD *)(a1 + 88) & 2) != 0 )
  {
    v6 = *(_WORD *)(v3 + 100);
    v7 = *(_WORD *)(v3 + 98);
LABEL_36:
    if ( (v4[7] & 1) != v6 )
    {
      v12 = v4[5];
      if ( !*(_WORD *)(v3 + 96) || (*(_DWORD *)(a1 + 20) & 1) != 0 )
      {
        if ( v12 )
        {
          v13 = *(_WORD *)(a1 + 238);
          v14 = (_QWORD *)(136LL * v12 + *(_QWORD *)(a1 + 552) - 104LL);
        }
        else
        {
          v13 = *(_WORD *)(a1 + 236);
          v14 = (_QWORD *)(a1 + 280);
        }
        v15 = *(_QWORD *)(*v14 + 16LL * (unsigned __int16)v4[6]);
        if ( v15 )
        {
          if ( v15 != a1 + 600 )
          {
            v16 = 0;
            while ( v15 != 104LL * v16 + a1 + 704 )
            {
              if ( ++v16 >= 4 )
              {
                if ( *(_BYTE *)(v15 + 2) == 40 )
                  v17 = *(_QWORD *)(v15 + 104);
                else
                  v17 = *(_QWORD *)(v15 + 56);
                if ( (v17 & 0xFFF) != 0 )
                  v17 = v17 - (v17 & 0xFFF) + 4096;
                if ( *(_QWORD *)(v17 + 4160) )
                {
                  v22 = 0LL;
                  StorPortExtendedFunction(47LL, a1, 0LL, &v22, v21);
                  *(_QWORD *)(v17 + 4176) = v22;
                }
                v18 = v13 - 1;
                v19 = v7;
                if ( v7 >= v18 )
                  v6 = v6 != 1;
                ++v7;
                if ( v19 >= v18 )
                  v7 = 0;
                v4 = (_WORD *)(*(_QWORD *)v3 + 16LL * v7);
                goto LABEL_36;
              }
            }
          }
        }
      }
    }
  }
  return v5;
}
