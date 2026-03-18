/*
 * XREFs of RequestPendingCompletion @ 0x1C0001088
 * Callers:
 *     NVMeHwInterrupt @ 0x1C00027E0 (NVMeHwInterrupt.c)
 *     NVMeHwMSIInterrupt @ 0x1C0002840 (NVMeHwMSIInterrupt.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C0011A4C (WaitForCommandCompleteWithCustomTimeout.c)
 * Callees:
 *     <none>
 */

bool __fastcall RequestPendingCompletion(__int64 a1, unsigned __int16 a2)
{
  __int64 v3; // rbx
  _WORD *v4; // rdx
  bool v5; // r12
  __int16 v6; // r15
  unsigned __int16 v7; // r14
  unsigned __int16 v8; // cx
  unsigned __int16 v9; // r13
  _QWORD *v10; // rax
  __int16 v11; // ax
  __int16 v12; // cx
  __int64 v13; // r9
  unsigned int v14; // r8d
  __int16 v15; // ax
  __int16 v16; // cx
  __int64 v17; // rbp
  unsigned int v18; // edx
  __int64 v19; // rbp
  __int64 v21; // [rsp+20h] [rbp-28h]
  __int64 v22; // [rsp+60h] [rbp+18h] BYREF

  if ( a2 == 0xFFFF )
  {
    v3 = a1 + 376;
    v11 = *(_WORD *)(a1 + 476);
    v4 = (_WORD *)(*(_QWORD *)(a1 + 376) + 16LL * *(unsigned __int16 *)(a1 + 474));
    v12 = v4[7] & 1;
    v5 = v12 != v11;
    if ( v12 == v11 )
    {
      v13 = *(_QWORD *)(a1 + 552);
      v14 = 0;
      if ( v13 )
      {
        while ( v14 < *(unsigned __int16 *)(a1 + 234) )
        {
          v3 = v13 + 168LL * v14;
          v15 = *(_WORD *)(v3 + 100);
          v4 = (_WORD *)(*(_QWORD *)v3 + 16LL * *(unsigned __int16 *)(v3 + 98));
          v16 = v4[7] & 1;
          v5 = v16 != v15;
          if ( v16 != v15 )
            break;
          ++v14;
        }
      }
    }
  }
  else
  {
    if ( a2 )
      v3 = 168LL * a2 + *(_QWORD *)(a1 + 552) - 168LL;
    else
      v3 = a1 + 376;
    v4 = (_WORD *)(*(_QWORD *)v3 + 16LL * *(unsigned __int16 *)(v3 + 98));
    v5 = (v4[7] & 1) != *(_WORD *)(v3 + 100);
  }
  if ( v5 && (*(_DWORD *)(a1 + 88) & 2) != 0 )
  {
    v6 = *(_WORD *)(v3 + 100);
    v7 = *(_WORD *)(v3 + 98);
    if ( (v4[7] & 1) != v6 )
    {
LABEL_9:
      v8 = v4[5];
      if ( !*(_WORD *)(v3 + 96) || (*(_DWORD *)(a1 + 20) & 1) != 0 )
      {
        if ( v8 )
        {
          v9 = *(_WORD *)(a1 + 230);
          v10 = (_QWORD *)(136LL * v8 + *(_QWORD *)(a1 + 544) - 104LL);
        }
        else
        {
          v9 = *(_WORD *)(a1 + 228);
          v10 = (_QWORD *)(a1 + 272);
        }
        v17 = *(_QWORD *)(*v10 + 16LL * (unsigned __int16)v4[6]);
        if ( v17 )
        {
          if ( v17 != a1 + 568 )
          {
            v18 = 0;
            while ( v17 != 104LL * v18 + a1 + 672 )
            {
              if ( ++v18 >= 4 )
              {
                if ( *(_BYTE *)(v17 + 2) == 40 )
                  v19 = *(_QWORD *)(v17 + 104);
                else
                  v19 = *(_QWORD *)(v17 + 56);
                if ( (v19 & 0xFFF) != 0 )
                  v19 = v19 - (v19 & 0xFFF) + 4096;
                if ( *(_QWORD *)(v19 + 4160) )
                {
                  v22 = 0LL;
                  StorPortExtendedFunction(47LL, a1, 0LL, &v22, v21);
                  *(_QWORD *)(v19 + 4176) = v22;
                }
                if ( v7 >= v9 - 1 )
                {
                  v7 = 0;
                  v6 = v6 != 1;
                }
                else
                {
                  ++v7;
                }
                v4 = (_WORD *)(*(_QWORD *)v3 + 16LL * v7);
                if ( (v4[7] & 1) != v6 )
                  goto LABEL_9;
                return v5;
              }
            }
          }
        }
      }
    }
  }
  return v5;
}
