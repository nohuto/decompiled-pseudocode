/*
 * XREFs of sub_180109F60 @ 0x180109F60
 * Callers:
 *     sub_18010A2AC @ 0x18010A2AC (sub_18010A2AC.c)
 * Callees:
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwQueryInformationProcess @ 0x18009ADE0 (ZwQueryInformationProcess.c)
 *     ZwMapViewOfSection @ 0x18009AFC0 (ZwMapViewOfSection.c)
 *     ZwUnmapViewOfSection @ 0x18009B000 (ZwUnmapViewOfSection.c)
 *     ZwCreateSection @ 0x18009B400 (ZwCreateSection.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

__int64 __fastcall sub_180109F60(__int64 a1)
{
  __int64 result; // rax
  unsigned __int64 v3; // rcx
  unsigned int v4; // eax
  unsigned int v5; // ecx
  int v6; // edi
  int v7; // [rsp+50h] [rbp-B0h]
  __int64 v8; // [rsp+60h] [rbp-A0h]
  _DWORD v9[44]; // [rsp+80h] [rbp-80h] BYREF

  memset(v9, 0, sizeof(v9));
  result = ZwQueryInformationProcess();
  if ( (int)(result + 0x80000000) < 0 || (_DWORD)result == -1073741820 )
  {
    v3 = 160LL * v9[2];
    if ( v3 > 0xFFFFFFFF )
    {
      return 3221225621LL;
    }
    else
    {
      v4 = 160 * v9[2];
      v5 = v3 + 176;
      if ( v5 >= v4 )
      {
        result = ZwCreateSection();
        if ( (int)result >= 0 )
        {
          v6 = ZwMapViewOfSection();
          if ( v6 >= 0 )
          {
            memset(0LL, 0, 0xB0uLL);
            if ( (int)ZwQueryInformationProcess() >= 0 )
            {
              ZwUnmapViewOfSection();
              *(_DWORD *)(a1 + 936) = v7;
              *(_QWORD *)(a1 + 944) = v8;
              *(_QWORD *)(a1 + 952) = MEMORY[0x7FFE0014];
              return 0LL;
            }
            else
            {
              ZwUnmapViewOfSection();
              return ZwClose();
            }
          }
          else
          {
            ZwClose();
            return (unsigned int)v6;
          }
        }
      }
      else
      {
        return v5 < v4 ? 0xC0000095 : 0;
      }
    }
  }
  return result;
}
