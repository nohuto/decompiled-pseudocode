/*
 * XREFs of RequestPendingCompletion @ 0x1C000115C
 * Callers:
 *     NVMeHwInterrupt @ 0x1C0002540 (NVMeHwInterrupt.c)
 *     NVMeHwMSIInterrupt @ 0x1C00025A0 (NVMeHwMSIInterrupt.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C00102C8 (WaitForCommandCompleteWithCustomTimeout.c)
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
  __int64 v10; // rax
  __int16 v11; // cx
  __int64 v12; // r9
  unsigned int v13; // r8d
  __int16 v14; // cx
  __int64 v15; // rbp
  unsigned int v16; // edx
  __int64 v17; // rbp
  __int64 v19; // [rsp+20h] [rbp-28h]
  __int64 v20; // [rsp+60h] [rbp+18h] BYREF

  if ( a2 == 0xFFFF )
  {
    v3 = a1 + 376;
    v4 = (_WORD *)(*(_QWORD *)(a1 + 376) + 16LL * *(unsigned __int16 *)(a1 + 474));
    v11 = v4[7] & 1;
    v5 = v11 != *(_WORD *)(v3 + 100);
    if ( v11 == *(_WORD *)(v3 + 100) )
    {
      v12 = *(_QWORD *)(a1 + 552);
      v13 = 0;
      if ( v12 )
      {
        while ( v13 < *(unsigned __int16 *)(a1 + 234) )
        {
          v3 = v12 + 168LL * v13;
          v4 = (_WORD *)(*(_QWORD *)v3 + 16LL * *(unsigned __int16 *)(v3 + 98));
          v14 = v4[7] & 1;
          v5 = v14 != *(_WORD *)(v3 + 100);
          if ( v14 != *(_WORD *)(v3 + 100) )
            break;
          ++v13;
        }
      }
    }
  }
  else
  {
    if ( a2 )
      v3 = *(_QWORD *)(a1 + 552) + 168LL * (a2 - 1);
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
          v10 = *(_QWORD *)(a1 + 544) + 136LL * (v8 - 1);
        }
        else
        {
          v9 = *(_WORD *)(a1 + 228);
          v10 = a1 + 240;
        }
        v15 = *(_QWORD *)(*(_QWORD *)(v10 + 32) + 16LL * (unsigned __int16)v4[6]);
        if ( v15 )
        {
          if ( v15 != a1 + 568 )
          {
            v16 = 0;
            while ( v15 != 104LL * v16 + a1 + 672 )
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
                  v20 = 0LL;
                  StorPortExtendedFunction(47LL, a1, 0LL, &v20, v19);
                  *(_QWORD *)(v17 + 4176) = v20;
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
