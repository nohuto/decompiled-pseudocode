/*
 * XREFs of sub_1800F5B90 @ 0x1800F5B90
 * Callers:
 *     sub_1800F5B30 @ 0x1800F5B30 (sub_1800F5B30.c)
 * Callees:
 *     sub_1800014DC @ 0x1800014DC (sub_1800014DC.c)
 *     sub_180001600 @ 0x180001600 (sub_180001600.c)
 *     sub_180032C0C @ 0x180032C0C (sub_180032C0C.c)
 *     sub_18003A72C @ 0x18003A72C (sub_18003A72C.c)
 *     ZwQueryVirtualMemory @ 0x1800A5760 (ZwQueryVirtualMemory.c)
 */

NTSTATUS __fastcall sub_1800F5B90(__int64 a1)
{
  char *v2; // r14
  NTSTATUS VirtualMemory; // ebx
  _DWORD *v4; // rax
  NTSTATUS v5; // eax
  __int64 v6; // rsi
  _DWORD *i; // rsi
  _QWORD *j; // rdi
  NTSTATUS result; // eax
  PVOID BaseOfImage[2]; // [rsp+30h] [rbp-50h] BYREF
  char v11; // [rsp+40h] [rbp-40h]
  _BYTE MemoryInformation[24]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v13; // [rsp+60h] [rbp-20h]
  int v14; // [rsp+70h] [rbp-10h]
  int v15; // [rsp+C8h] [rbp+48h] BYREF
  DWORD v16; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v17; // [rsp+D8h] [rbp+58h] BYREF

  v2 = 0LL;
  do
  {
    VirtualMemory = ZwQueryVirtualMemory(
                      (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                      v2,
                      MemoryBasicInformation,
                      MemoryInformation,
                      0x30uLL,
                      0LL);
    if ( VirtualMemory < 0 )
      break;
    if ( v14 == 0x1000000 )
    {
      VirtualMemory = ZwQueryVirtualMemory(
                        (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                        v2,
                        MemoryImageInformation,
                        BaseOfImage,
                        0x18uLL,
                        0LL);
      if ( VirtualMemory >= 0 )
      {
        if ( BaseOfImage[0] )
        {
          if ( (v11 & 2) == 0 && (v11 & 1) == 0 )
          {
            v4 = sub_18003A72C(BaseOfImage[0]);
            if ( !v4 || *v4 < 0x94u || (v4[36] & 0x4000) == 0 )
            {
              v5 = sub_180032C0C((unsigned __int64)BaseOfImage[0], 1, 1u, &v16, (char **)&v17);
              v6 = v17;
              if ( v5 < 0 )
                v6 = 0LL;
              v17 = v6;
              if ( v6 )
              {
                for ( i = (_DWORD *)(v6 + 12); *i; i += 5 )
                {
                  for ( j = (char *)BaseOfImage[0] + (unsigned int)i[1]; *j; ++j )
                  {
                    if ( *j == a1 && (unsigned int)sub_1800014DC(a1, &v15) != 1 && (v15 & 0x10) != 0 )
                    {
                      result = sub_180001600(a1, 4u);
                      VirtualMemory = result;
                      if ( result >= 0 )
                        return result;
                      break;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    v2 += v13;
  }
  while ( VirtualMemory >= 0 );
  return VirtualMemory;
}
