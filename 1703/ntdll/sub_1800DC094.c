/*
 * XREFs of sub_1800DC094 @ 0x1800DC094
 * Callers:
 *     sub_1800DB530 @ 0x1800DB530 (sub_1800DB530.c)
 * Callees:
 *     sub_18000159C @ 0x18000159C (sub_18000159C.c)
 *     sub_18003999C @ 0x18003999C (sub_18003999C.c)
 *     DbgPrint @ 0x18005FEF0 (DbgPrint.c)
 *     ZwProtectVirtualMemory @ 0x1800A5D00 (ZwProtectVirtualMemory.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

int __fastcall sub_1800DC094(__int64 a1)
{
  int result; // eax
  __int64 *v3; // rbx
  __int64 v4; // rax
  __int64 v5; // r12
  __int64 *v6; // rdi
  __int64 *v7; // rax
  int v8; // r15d
  _QWORD *v9; // rbp
  _QWORD *v10; // rax
  _QWORD *v11; // r14
  __int64 v12; // r13
  _QWORD *v13; // rsi
  __int64 v14; // rax
  __int64 *v15; // [rsp+30h] [rbp-F8h]
  _QWORD *v16; // [rsp+38h] [rbp-F0h]
  _QWORD v17[29]; // [rsp+40h] [rbp-E8h] BYREF
  int v19; // [rsp+138h] [rbp+10h] BYREF
  ULONG OldProtect; // [rsp+140h] [rbp+18h] BYREF
  __int64 v21; // [rsp+148h] [rbp+20h]

  if ( !byte_18016B281 )
    return -1073741790;
  memset(v17, 0, 0xA0uLL);
  v17[6] = a1;
  result = sub_18003999C((__int64)v17);
  if ( result >= 0 )
  {
    v3 = (__int64 *)v17[12];
    if ( v17[12] )
    {
      v4 = v17[13] >> 3;
      if ( (unsigned int)(v17[13] >> 3) )
      {
        v5 = (unsigned int)v4;
        v21 = (unsigned int)v4;
        do
        {
          if ( *v3 )
          {
            v6 = (__int64 *)qword_18015A570;
            if ( (__int64 *)qword_18015A570 != &qword_18015A570 )
            {
              do
              {
                v7 = v6;
                v8 = 0;
                v6 = (__int64 *)*v6;
                v15 = v7;
                v9 = (_QWORD *)v7[5];
                v16 = v9;
                if ( *v9 )
                {
                  v10 = (_QWORD *)v7[5];
                  do
                  {
                    v11 = (_QWORD *)v10[3];
                    LODWORD(v12) = 0;
                    if ( *v11 )
                    {
                      v13 = (_QWORD *)v10[3];
                      do
                      {
                        if ( *v3 == v13[1] )
                        {
                          sub_18000159C(*v3, 1u, &v19);
                          v14 = v13[2];
                          if ( !v14 )
                          {
                            DbgPrint("AVRF: internal error: New thunk for %s is null. \n", (const char *)*v13);
                            __debugbreak();
                          }
                          *v3 = v14;
                          if ( (dword_18015C494 & 1) != 0 )
                            DbgPrint(
                              "AVRF: Snapped (%ws: %s) with (%ws: %p). \n",
                              *(_QWORD *)(a1 + 96),
                              *v13,
                              v15[3],
                              v13[2]);
                        }
                        v12 = (unsigned int)(v12 + 1);
                        v13 = &v11[3 * v12];
                      }
                      while ( *v13 );
                      v9 = v16;
                    }
                    v10 = &v9[4 * (unsigned int)++v8];
                  }
                  while ( *v10 );
                }
              }
              while ( v6 != &qword_18015A570 );
              v5 = v21;
            }
          }
          ++v3;
          v21 = --v5;
        }
        while ( v5 );
      }
      return ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)&v17[12], &v17[13], v17[16], &OldProtect);
    }
    else
    {
      return 0;
    }
  }
  return result;
}
