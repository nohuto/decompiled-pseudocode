/*
 * XREFs of sub_1800E70A4 @ 0x1800E70A4
 * Callers:
 *     RtlGetSetBootStatusData @ 0x1800E6BD0 (RtlGetSetBootStatusData.c)
 * Callees:
 *     ZwReadFile @ 0x18009AB80 (ZwReadFile.c)
 *     ZwWriteFile @ 0x18009ABC0 (ZwWriteFile.c)
 *     sub_1800E71DC @ 0x1800E71DC (sub_1800E71DC.c)
 */

__int64 __fastcall sub_1800E70A4(__int64 a1, char a2, int a3, __int64 a4, unsigned int a5, _DWORD *a6)
{
  __int64 v8; // rbx
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // r15
  int File; // ebx
  int v13; // eax
  __int64 v14; // rcx
  unsigned int v15; // [rsp+50h] [rbp-20h]
  __int64 v16; // [rsp+58h] [rbp-18h]
  int v17; // [rsp+68h] [rbp-8h]

  v8 = a3;
  result = ZwReadFile();
  if ( (int)result >= 0 )
  {
    if ( (unsigned int)v8 >= 0x10 )
    {
      return 3221225485LL;
    }
    else
    {
      v10 = dword_180129C30[2 * v8 + 1];
      v16 = dword_180129C30[2 * v8];
      v11 = (unsigned int)v10;
      if ( v10 + v16 <= (unsigned __int64)v15 )
      {
        if ( a5 >= (unsigned int)v10 )
        {
          if ( a2 )
          {
            File = ZwReadFile();
          }
          else
          {
            v13 = ZwWriteFile();
            LOBYTE(v14) = 1;
            File = v13;
            sub_1800E71DC(v14, a4, v16, v11);
          }
          if ( File >= 0 )
          {
            if ( a6 )
              *a6 = v17;
          }
          return (unsigned int)File;
        }
        else
        {
          return 3221225507LL;
        }
      }
      else
      {
        return 3221225561LL;
      }
    }
  }
  return result;
}
