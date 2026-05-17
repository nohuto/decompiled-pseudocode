/*
 * XREFs of sub_1800477EC @ 0x1800477EC
 * Callers:
 *     sub_18004773C @ 0x18004773C (sub_18004773C.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180010300 (RtlImageNtHeaderEx.c)
 *     RtlCompareUnicodeStrings @ 0x180022BB0 (RtlCompareUnicodeStrings.c)
 *     RtlInitUnicodeString @ 0x1800369B0 (RtlInitUnicodeString.c)
 *     sub_1800477B0 @ 0x1800477B0 (sub_1800477B0.c)
 *     sub_180047A28 @ 0x180047A28 (sub_180047A28.c)
 *     sub_180047A60 @ 0x180047A60 (sub_180047A60.c)
 *     sub_180047ACC @ 0x180047ACC (sub_180047ACC.c)
 */

__int64 __fastcall sub_1800477EC(unsigned __int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int *v5; // rcx
  bool v6; // cc
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // r10
  __int64 v10; // rdx
  __int64 v11; // r10
  __int64 v12; // r10
  __int64 v13; // rdx
  __int64 v14; // rdx
  unsigned int *v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rbx
  __int64 v19; // rdx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  unsigned int *v21; // [rsp+60h] [rbp+20h] BYREF

  *(_QWORD *)&DestinationString.Length = a1;
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  result = RtlImageNtHeaderEx(3, a1, 0LL, &v21);
  if ( (int)result >= 0 )
  {
    v5 = v21;
    *(_DWORD *)a2 = v21[2];
    *(_DWORD *)(a2 + 4) = v5[22];
    v6 = v5[33] <= 2;
    result = v5[20];
    DestinationString.Buffer = (wchar_t *)result;
    if ( !v6 )
    {
      result = v5[38];
      if ( (_DWORD)result )
      {
        if ( v5[39] >= 0x10 )
        {
          result = (unsigned int)-sub_180047A28(&DestinationString, a1 + result, 16LL);
          v8 = v7 & -(__int64)((_DWORD)result != 0);
          if ( v8 )
          {
            result = sub_1800477B0(
                       (__int64)&DestinationString,
                       v7 & -(__int64)((_DWORD)result != 0),
                       *(unsigned __int16 *)((v7 & -(__int64)((_DWORD)result != 0)) + 0xC));
            if ( result )
            {
              result = sub_180047A60(&DestinationString, result, *(unsigned __int16 *)(v8 + 14), 16LL);
              if ( result )
              {
                v9 = *(unsigned int *)(result + 4);
                LODWORD(v9) = v9 & 0x7FFFFFFF;
                result = sub_180047A28(&DestinationString, v8 + v9, 16LL);
                if ( (_DWORD)result )
                {
                  result = sub_1800477B0((__int64)&DestinationString, v10, *(unsigned __int16 *)(v11 + 12));
                  if ( result )
                  {
                    result = sub_180047A60(&DestinationString, result, *(unsigned __int16 *)(v12 + 14), 1LL);
                    if ( result )
                    {
                      v13 = *(unsigned int *)(result + 4);
                      LODWORD(v13) = v13 & 0x7FFFFFFF;
                      result = sub_180047A28(&DestinationString, v8 + v13, 16LL);
                      if ( (_DWORD)result )
                      {
                        result = sub_1800477B0((__int64)&DestinationString, v14, 0);
                        if ( result )
                        {
                          if ( *(int *)(result + 4) >= 0 )
                          {
                            result = sub_180047A28(&DestinationString, v8 + *(unsigned int *)(result + 4), 16LL);
                            if ( (_DWORD)result )
                            {
                              if ( v15[1] >= 0x5C )
                              {
                                result = (unsigned int)-sub_180047A28(&DestinationString, a1 + *v15, 92LL);
                                v18 = v16 & -(__int64)((_DWORD)result != 0);
                                if ( v18 )
                                {
                                  result = sub_180047A28(&DestinationString, v16 & -(__int64)((_DWORD)result != 0), v17);
                                  if ( (_DWORD)result )
                                  {
                                    result = sub_180047A28(&DestinationString, v18 + 6, 32LL);
                                    if ( (_DWORD)result )
                                    {
                                      RtlInitUnicodeString(&DestinationString, L"VS_VERSION_INFO");
                                      result = sub_180047ACC(v18 + 6, v19, &v21);
                                      if ( (int)result >= 0 )
                                      {
                                        result = RtlCompareUnicodeStrings(
                                                   DestinationString.Buffer,
                                                   (unsigned __int64)DestinationString.Length >> 1,
                                                   v18 + 6,
                                                   (unsigned __int64)(unsigned __int16)v21 >> 1,
                                                   0);
                                        if ( !(_DWORD)result )
                                        {
                                          *(_DWORD *)(a2 + 8) = *(_DWORD *)(v18 + 48);
                                          result = *(unsigned int *)(v18 + 52);
                                          *(_DWORD *)(a2 + 12) = result;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}
