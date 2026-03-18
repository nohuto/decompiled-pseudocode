/*
 * XREFs of WheapLogInitEvent @ 0x1405CCE38
 * Callers:
 *     WheaInitialize @ 0x1407FC324 (WheaInitialize.c)
 * Callees:
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140094650 (EtwWrite.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

void WheapLogInitEvent()
{
  char *PoolWithTag; // rbx
  __int64 *v1; // r8
  int i; // r9d
  __int64 v3; // rcx
  __int64 *v4; // rax
  char *v5; // rdx
  __int128 v6; // xmm1
  struct _DRIVER_OBJECT *DriverObject; // rdi
  int v8; // [rsp+30h] [rbp-19h] BYREF
  int v9; // [rsp+34h] [rbp-15h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-9h] BYREF
  int *v11; // [rsp+50h] [rbp+7h]
  __int64 v12; // [rsp+58h] [rbp+Fh]
  int *v13; // [rsp+60h] [rbp+17h]
  __int64 v14; // [rsp+68h] [rbp+1Fh]
  char *v15; // [rsp+70h] [rbp+27h]
  int v16; // [rsp+78h] [rbp+2Fh]
  int v17; // [rsp+7Ch] [rbp+33h]

  v8 = 1064 * dword_14036F11C;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(1064 * dword_14036F11C), 0x61656857u);
  if ( PoolWithTag )
  {
    v1 = (__int64 *)qword_14036F120;
    for ( i = 0; v1 != &qword_14036F120; v1 = (__int64 *)*v1 )
    {
      v3 = 8LL;
      v4 = v1;
      v5 = &PoolWithTag[1064 * i];
      do
      {
        *(_OWORD *)v5 = *(_OWORD *)v4;
        *((_OWORD *)v5 + 1) = *((_OWORD *)v4 + 1);
        *((_OWORD *)v5 + 2) = *((_OWORD *)v4 + 2);
        *((_OWORD *)v5 + 3) = *((_OWORD *)v4 + 3);
        *((_OWORD *)v5 + 4) = *((_OWORD *)v4 + 4);
        *((_OWORD *)v5 + 5) = *((_OWORD *)v4 + 5);
        *((_OWORD *)v5 + 6) = *((_OWORD *)v4 + 6);
        v5 += 128;
        v6 = *((_OWORD *)v4 + 7);
        v4 += 16;
        *((_OWORD *)v5 - 1) = v6;
        --v3;
      }
      while ( v3 );
      ++i;
      *(_OWORD *)v5 = *(_OWORD *)v4;
      *((_OWORD *)v5 + 1) = *((_OWORD *)v4 + 1);
      *((_QWORD *)v5 + 4) = v4[4];
    }
    DriverObject = WheapDispatchPtr.DriverObject;
    UserData.Ptr = (ULONGLONG)&dword_14036F11C;
    *(_QWORD *)&UserData.Size = 4LL;
    v11 = &v9;
    v9 = 10;
    v13 = &v8;
    v16 = v8;
    v12 = 4LL;
    v14 = 4LL;
    v15 = PoolWithTag;
    v17 = 0;
    if ( EtwEventEnabled((REGHANDLE)WheapDispatchPtr.DriverObject, &EVENT_WHEA_INIT_OP) == 1 )
      EtwWrite((REGHANDLE)DriverObject, &EVENT_WHEA_INIT_OP, 0LL, 4u, &UserData);
    ExFreePoolWithTag(PoolWithTag, 0x61656857u);
  }
}
