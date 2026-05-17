/*
 * XREFs of RtlpGetSetBootStatusData @ 0x1800EAD84
 * Callers:
 *     RtlGetSetBootStatusData @ 0x1800EAA10 (RtlGetSetBootStatusData.c)
 * Callees:
 *     NtReadFile @ 0x1800A0180 (NtReadFile.c)
 *     NtWriteFile @ 0x1800A01C0 (NtWriteFile.c)
 *     RtlpRecordBootStatusData @ 0x1800EAEBC (RtlpRecordBootStatusData.c)
 */

__int64 __fastcall RtlpGetSetBootStatusData(__int64 a1, char a2, int a3, __int64 a4, unsigned int a5, _DWORD *a6)
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
  result = NtReadFile();
  if ( (int)result >= 0 )
  {
    if ( (unsigned int)v8 >= 0x10 )
    {
      return 3221225485LL;
    }
    else
    {
      v10 = RtlpBootStatusFields[2 * v8 + 1];
      v16 = RtlpBootStatusFields[2 * v8];
      v11 = (unsigned int)v10;
      if ( v10 + v16 <= (unsigned __int64)v15 )
      {
        if ( a5 >= (unsigned int)v10 )
        {
          if ( a2 )
          {
            File = NtReadFile();
          }
          else
          {
            v13 = NtWriteFile();
            LOBYTE(v14) = 1;
            File = v13;
            RtlpRecordBootStatusData(v14, a4, v16, v11);
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
