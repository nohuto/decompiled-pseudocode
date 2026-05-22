/*
 * XREFs of ?OnDisconnected@InputSiteElementProxy@@MEAAJXZ @ 0x18000E410
 * Callers:
 *     <none>
 * Callees:
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x180019168 (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InputSiteElementProxy::OnDisconnected(InputSiteElementProxy *this)
{
  struct InputSystemServerConnection *BamoServerConnection; // rax
  __int64 v3; // rax
  __int64 v4; // rbp
  InputSiteElementProxy **i; // rbx
  InputSiteElementProxy **v6; // rsi
  InputSiteElementProxy **v7; // rdi
  InputSiteElementProxy **v8; // rax
  InputSiteElementProxy *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  char v13; // [rsp+30h] [rbp+8h] BYREF

  BamoServerConnection = ISMStatics::GetBamoServerConnection();
  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)BamoServerConnection + 19) + 8LL) + 88LL))(*((_QWORD *)BamoServerConnection + 19) + 8LL);
  v4 = v3;
  for ( i = *(InputSiteElementProxy ***)(v3 + 80); i != *(InputSiteElementProxy ***)(v3 + 88) && *i != this; ++i )
    ;
  v6 = *(InputSiteElementProxy ***)(v3 + 88);
  v7 = i + 1;
  v8 = v6;
  if ( i + 1 != v6 )
  {
    do
    {
      v9 = 0LL;
      if ( &v13 != (char *)v7 )
      {
        v9 = *v7;
        *v7 = 0LL;
      }
      v10 = (__int64)*(v7 - 1);
      *(v7 - 1) = v9;
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
      ++v7;
    }
    while ( v7 != v6 );
    v6 = *(InputSiteElementProxy ***)(v4 + 88);
    v8 = v6;
  }
  v11 = (__int64)*(v6 - 1);
  if ( v11 )
  {
    *(v6 - 1) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
    v8 = *(InputSiteElementProxy ***)(v4 + 88);
  }
  *(_QWORD *)(v4 + 88) = v8 - 1;
  return 0LL;
}
