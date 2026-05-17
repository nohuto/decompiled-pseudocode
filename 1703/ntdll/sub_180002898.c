/*
 * XREFs of sub_180002898 @ 0x180002898
 * Callers:
 *     sub_1800026FC @ 0x1800026FC (sub_1800026FC.c)
 * Callees:
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwQueryInformationProcess @ 0x1800A5620 (ZwQueryInformationProcess.c)
 *     ZwMapViewOfSection @ 0x1800A5800 (ZwMapViewOfSection.c)
 *     ZwUnmapViewOfSection @ 0x1800A5840 (ZwUnmapViewOfSection.c)
 *     ZwCreateSection @ 0x1800A5C40 (ZwCreateSection.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

__int64 __fastcall sub_180002898(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v5; // edx
  unsigned __int64 v6; // rcx
  unsigned int v7; // eax
  int v8; // edi
  int v9; // [rsp+50h] [rbp-B0h] BYREF
  void *v10; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v11; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v12[2]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v13; // [rsp+70h] [rbp-90h] BYREF
  _DWORD v14[44]; // [rsp+80h] [rbp-80h] BYREF

  memset(v14, 0, sizeof(v14));
  result = ZwQueryInformationProcess(a2, 32LL, v14, 176LL, &v9);
  if ( (int)(result + 0x80000000) < 0 || (_DWORD)result == -1073741820 )
  {
    v5 = -1;
    v6 = 160LL * v14[2];
    if ( v6 <= 0xFFFFFFFF )
    {
      v7 = v6 + 176;
      if ( (int)v6 + 176 >= (unsigned int)v6 )
        v5 = v6 + 176;
      v12[0] = v5;
      if ( v7 >= (unsigned int)v6 )
      {
        v12[1] = 0;
        result = ZwCreateSection(&v11, 983047LL, "0", v12, 4, 0x8000000, 0LL);
        if ( (int)result >= 0 )
        {
          v10 = 0LL;
          v13 = 0LL;
          v8 = ZwMapViewOfSection(v11, -1LL, &v10, 0LL, 0LL, 0LL, &v13, 1, 0, 4);
          if ( v8 >= 0 )
          {
            memset(v10, 0, 0xB0uLL);
            if ( (int)ZwQueryInformationProcess(a2, 32LL, v10, v12[0], &v9) >= 0 )
            {
              ZwUnmapViewOfSection(-1LL, v10);
              *(_DWORD *)(a1 + 936) = v9;
              *(_QWORD *)(a1 + 944) = v11;
              *(_QWORD *)(a1 + 952) = MEMORY[0x7FFE0014];
              return 0LL;
            }
            else
            {
              ZwUnmapViewOfSection(-1LL, v10);
              return ZwClose(v11);
            }
          }
          else
          {
            ZwClose(v11);
            return (unsigned int)v8;
          }
        }
      }
      else
      {
        return v7 < (unsigned int)v6 ? 0xC0000095 : 0;
      }
    }
    else
    {
      return 3221225621LL;
    }
  }
  return result;
}
