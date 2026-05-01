/*
 * XREFs of ?RmpRpExtStart@@YAJPEAU_RM_RESOURCE_POLICY_CONTEXT@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180021944
 * Callers:
 *     ?RmpStartAllModules@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x1800217D4 (-RmpStartAllModules@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     ??2@YAPEAX_K@Z @ 0x180025A8C (--2@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     IsRmRpsHostEmptyNotificationPresent @ 0x180026640 (IsRmRpsHostEmptyNotificationPresent.c)
 *     memset_0 @ 0x180026AAB (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180026AD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmpRpExtStart(struct _RM_RESOURCE_POLICY_CONTEXT *a1, struct _RM_SERVICE_GLOBALS *a2)
{
  unsigned int v4; // ebx
  _QWORD *v5; // rdi
  __int64 v6; // rdx
  const struct _TlgProvider_t *v8; // rcx
  const GUID *v9; // r8
  const GUID *v10; // r9
  int v11; // [rsp+30h] [rbp-88h] BYREF
  __int64 v12; // [rsp+38h] [rbp-80h] BYREF
  _BYTE v13[48]; // [rsp+40h] [rbp-78h] BYREF
  __int64 (__fastcall *v14)(__int64, unsigned __int64, struct _RM_RESOURCE_LIMITS *); // [rsp+70h] [rbp-48h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp-40h] BYREF
  int *v16; // [rsp+98h] [rbp-20h]
  __int64 v17; // [rsp+A0h] [rbp-18h]

  v4 = 0;
  if ( (unsigned __int8)IsRmRpsHostEmptyNotificationPresent() )
  {
    v5 = operator new(0x18uLL);
    if ( v5 )
    {
      v5[1] = a2;
      *v5 = &RmpRpExtResourceManagerThunk::`vftable';
      *((_DWORD *)v5 + 4) = 1;
    }
    else
    {
      v5 = 0LL;
    }
    if ( v5 )
    {
      memset_0(v13, 0, 0x38uLL);
      v14 = RmpRpExtSetHostLimit;
      v11 = RmRpsInitialize(v13, v5, &v12);
      if ( v11 < 0 )
      {
        if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
        {
          v17 = 4LL;
          v16 = &v11;
          TlgWrite(v8, &unk_18005560C, v9, v10, 3u, &pData);
        }
        v4 = -1073741823;
      }
      else
      {
        v6 = v12;
        *((_DWORD *)a1 + 2) |= 1u;
        *(_QWORD *)a1 = v6;
      }
      (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v4;
}
