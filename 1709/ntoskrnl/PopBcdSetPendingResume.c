/*
 * XREFs of PopBcdSetPendingResume @ 0x14070B558
 * Callers:
 *     PopAllocateHiberContext @ 0x1406FAC78 (PopAllocateHiberContext.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     BcdQueryObject @ 0x1405AE960 (BcdQueryObject.c)
 *     BcdOpenObject @ 0x1405AF35C (BcdOpenObject.c)
 *     BcdCloseObject @ 0x1405AF4D8 (BcdCloseObject.c)
 *     BcdSetElementDataWithFlags @ 0x1405AF6E8 (BcdSetElementDataWithFlags.c)
 *     PopBcdSetupResumeObject @ 0x1405B1C28 (PopBcdSetupResumeObject.c)
 */

__int64 __fastcall PopBcdSetPendingResume(__int64 a1, __int64 a2, __int64 a3, void *a4)
{
  int Object; // ebx
  __int64 v7; // r8
  int v8; // eax
  __int64 v9; // r8
  void *v10; // rdi
  __int64 v11; // r8
  __int64 v12; // r8
  __int16 v14; // [rsp+30h] [rbp-30h] BYREF
  void *v15; // [rsp+38h] [rbp-28h] BYREF
  _BYTE v16[16]; // [rsp+40h] [rbp-20h] BYREF

  v15 = 0LL;
  Object = PopBcdSetupResumeObject(a4);
  if ( Object >= 0 )
  {
    HIBYTE(v14) = 0;
    LOBYTE(v14) = (_BYTE)KdDebuggerEnabled != 0;
    BcdSetElementDataWithFlags(a4, 0x26000006u, v7, (__int64)&v14, 2u);
    Object = BcdQueryObject((__int64)a4, 0, 0LL, (__int64)v16);
    if ( Object >= 0 )
    {
      v8 = BcdOpenObject(a1, &GUID_WINDOWS_BOOTMGR.Data1, &v15);
      v10 = v15;
      Object = v8;
      if ( v8 >= 0 )
      {
        Object = BcdSetElementDataWithFlags(v15, 0x23000006u, v9, (__int64)v16, 0x10u);
        if ( Object >= 0 )
        {
          v14 = 1;
          Object = BcdSetElementDataWithFlags(v10, 0x26000005u, v11, (__int64)&v14, 2u);
          if ( Object >= 0 )
          {
            v14 = (unsigned __int8)byte_140365B40;
            Object = BcdSetElementDataWithFlags(v10, 0x26000025u, v12, (__int64)&v14, 2u);
            if ( Object >= 0 )
              Object = 0;
          }
        }
      }
      if ( v10 )
        BcdCloseObject((__int64)v10);
    }
  }
  return (unsigned int)Object;
}
