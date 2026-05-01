/*
 * XREFs of ?HampDepGroupProcessActionForActivity@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_DEPENDENCY_ACTION@@@Z @ 0x180044CF4
 * Callers:
 *     ?HampDepGroupProcessActionForGroup@@YAJPEAU_HAM_DEPENDENCY_GROUP@@W4_HAM_DEPENDENCY_ACTION@@@Z @ 0x180044DE4 (-HampDepGroupProcessActionForGroup@@YAJPEAU_HAM_DEPENDENCY_GROUP@@W4_HAM_DEPENDENCY_ACTION@@@Z.c)
 *     ?HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18004508C (-HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     ?HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180047218 (-HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180047ED8 (-HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActStop@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180047F90 (-HampActStop@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 */

__int64 __fastcall HampDepGroupProcessActionForActivity(struct _HAM_ACTIVITY *a1, char a2)
{
  const struct _TlgProvider_t *v4; // rcx
  const GUID *v5; // r8
  const GUID *v6; // r9
  __int64 result; // rax
  char v8; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  char *v10; // [rsp+60h] [rbp-38h]
  int v11; // [rsp+68h] [rbp-30h]
  int v12; // [rsp+6Ch] [rbp-2Ch]
  char *v13; // [rsp+70h] [rbp-28h]
  int v14; // [rsp+78h] [rbp-20h]
  int v15; // [rsp+7Ch] [rbp-1Ch]

  if ( hProvider > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x28uLL) )
    {
      v12 = 0;
      v15 = 0;
      v10 = (char *)a1 + 40;
      v13 = &v8;
      v11 = 8;
      v8 = a2;
      v14 = 1;
      TlgWrite(v4, &unk_18005B653, v5, v6, 4u, &pData);
    }
  }
  switch ( a2 )
  {
    case 1:
      result = HampActStartAsync(a1);
      if ( (int)result < 0 )
        return result;
      return 0LL;
    case 2:
      goto LABEL_8;
    case 3:
      HampActClose(a1);
      return 0LL;
    case 4:
LABEL_8:
      HampActStop(a1);
      break;
  }
  return 0LL;
}
