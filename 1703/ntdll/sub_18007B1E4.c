/*
 * XREFs of sub_18007B1E4 @ 0x18007B1E4
 * Callers:
 *     sub_180091AB4 @ 0x180091AB4 (sub_180091AB4.c)
 * Callees:
 *     sub_18003F2C4 @ 0x18003F2C4 (sub_18003F2C4.c)
 *     sub_18007B250 @ 0x18007B250 (sub_18007B250.c)
 */

__int64 __fastcall sub_18007B1E4(unsigned __int16 *a1)
{
  struct _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rbx
  int v2; // eax
  __int64 v3; // r11
  int v4; // eax
  __int64 result; // rax
  __int64 v6; // rcx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  ProcessParameters = NtCurrentPeb()->ProcessParameters;
  v2 = sub_18003F2C4(a1) - 1;
  if ( v2 )
  {
    v4 = v2 - 1;
    if ( v4 )
    {
      v7 = v4 - 1;
      if ( !v7 )
        return 3221225485LL;
      v8 = v7 - 1;
      if ( !v8 )
        return 3221225485LL;
      v9 = v8 - 1;
      if ( !v9 || (unsigned int)(v9 - 1) >= 2 )
        return 3221225485LL;
    }
  }
  result = sub_18007B250(v3, ProcessParameters->CurrentDirectory.DosPath.MaximumLength, &v10);
  if ( (int)result >= 0 )
  {
    v6 = v10;
    qword_18015BAB0 = v10;
    ProcessParameters->CurrentDirectory.Handle = *(void **)(v10 + 8);
    ProcessParameters->CurrentDirectory.DosPath.Buffer = *(wchar_t **)(v6 + 32);
    ProcessParameters->CurrentDirectory.DosPath.Length = *(_WORD *)(v6 + 24);
    return 0LL;
  }
  return result;
}
