/*
 * XREFs of PsspCaptureIptTrace @ 0x18005D188
 * Callers:
 *     PssNtCaptureSnapshot @ 0x18005C280 (PssNtCaptureSnapshot.c)
 * Callees:
 *     GetProcessIptTraceSize @ 0x18005D1E4 (GetProcessIptTraceSize.c)
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 *     ZwMapViewOfSection @ 0x1800A05C0 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1800A0600 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x1800A0A00 (NtCreateSection.c)
 *     memset @ 0x1800A6C80 (memset.c)
 *     GetProcessIptTrace @ 0x18010E404 (GetProcessIptTrace.c)
 */

__int64 __fastcall PsspCaptureIptTrace(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  size_t v5; // rbx
  int v6; // esi
  int ProcessIptTrace; // eax
  __int64 v8; // r8
  _DWORD *v9; // rdx
  unsigned int v10; // ebx
  int v11; // eax
  void *v12; // [rsp+50h] [rbp-20h] BYREF
  __int64 v13; // [rsp+58h] [rbp-18h] BYREF
  __int64 v14; // [rsp+60h] [rbp-10h] BYREF
  size_t Size; // [rsp+B0h] [rbp+40h] BYREF
  HANDLE Handle; // [rsp+B8h] [rbp+48h] BYREF

  v12 = 0LL;
  LODWORD(Size) = 0;
  Handle = 0LL;
  v14 = 0LL;
  v13 = 0LL;
  result = GetProcessIptTraceSize(a2, &Size);
  if ( (int)result >= 0 )
  {
    v5 = (unsigned int)Size;
    if ( (_DWORD)Size )
    {
      LODWORD(v13) = Size;
      result = NtCreateSection(&Handle, 983047LL, "0", &v13, 4, 0x8000000, 0LL);
      if ( (int)result >= 0 )
      {
        v6 = ZwMapViewOfSection(Handle, -1LL, &v12, 0LL, 0LL, 0LL, &v14, 1, 0, 4);
        if ( v6 >= 0 )
        {
          memset(v12, 0, v5);
          ProcessIptTrace = GetProcessIptTrace(a2, v12, (unsigned int)v5);
          v9 = v12;
          v10 = ProcessIptTrace;
          if ( ProcessIptTrace >= 0 )
          {
            *(_QWORD *)(a1 + 1128) = Handle;
            v11 = v9[1];
            *(_DWORD *)(a1 + 4) |= 0x10u;
            *(_DWORD *)(a1 + 1136) = v11 + 8;
            NtUnmapViewOfSection(-1LL, v9, v8);
            return 0LL;
          }
          else
          {
            NtUnmapViewOfSection(-1LL, v12, v8);
            NtClose(Handle);
            return v10;
          }
        }
        else
        {
          NtClose(Handle);
          return (unsigned int)v6;
        }
      }
    }
    else
    {
      return 3221226021LL;
    }
  }
  return result;
}
