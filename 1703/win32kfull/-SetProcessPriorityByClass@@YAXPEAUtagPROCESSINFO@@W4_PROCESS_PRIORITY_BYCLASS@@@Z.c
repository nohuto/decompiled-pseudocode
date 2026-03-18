/*
 * XREFs of ?SetProcessPriorityByClass@@YAXPEAUtagPROCESSINFO@@W4_PROCESS_PRIORITY_BYCLASS@@@Z @ 0x1C00B5D18
 * Callers:
 *     ?SetForegroundPriorityProcess@@YAXPEAUtagPROCESSINFO@@PEAUtagTHREADINFO@@W4_PROCESS_PRIORITY_BYCLASS@@@Z @ 0x1C00B5C18 (-SetForegroundPriorityProcess@@YAXPEAUtagPROCESSINFO@@PEAUtagTHREADINFO@@W4_PROCESS_PRIORITY_BYC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SetProcessPriorityByClass(__int64 *a1, int a2)
{
  unsigned int v4; // ecx
  __int64 result; // rax
  __int64 v6; // rsi
  int v7; // edx
  __int64 v8; // rdx
  __int64 v9; // rcx
  bool v10; // zf

  v4 = *((_DWORD *)a1 + 192);
  result = HIWORD(v4) & 3;
  if ( a2 != (_DWORD)result )
  {
    v6 = *a1;
    if ( a2 )
    {
      v7 = a2 - 1;
      if ( v7 )
      {
        if ( v7 != 1 )
          goto LABEL_7;
        v10 = (v4 & 0x30000) == 0x10000;
        v9 = *a1;
        if ( v10 )
        {
          v8 = 2LL;
          goto LABEL_6;
        }
        PsSetProcessPriorityByClass(v9, 1LL);
        v8 = 2LL;
      }
      else
      {
        v8 = 1LL;
      }
    }
    else
    {
      v8 = 0LL;
    }
    v9 = v6;
LABEL_6:
    result = PsSetProcessPriorityByClass(v9, v8);
LABEL_7:
    *((_DWORD *)a1 + 192) ^= (*((_DWORD *)a1 + 192) ^ (a2 << 16)) & 0x30000;
  }
  return result;
}
