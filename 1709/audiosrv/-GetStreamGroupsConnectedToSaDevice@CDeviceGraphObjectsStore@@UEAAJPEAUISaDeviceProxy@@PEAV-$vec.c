/*
 * XREFs of ?GetStreamGroupsConnectedToSaDevice@CDeviceGraphObjectsStore@@UEAAJPEAUISaDeviceProxy@@PEAV?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x180097030
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_c774dc0092cfa85ab52d91ce2e4bcbd2_::operator() @ 0x1800964B8 (_lambda_c774dc0092cfa85ab52d91ce2e4bcbd2_--operator().c)
 */

__int64 __fastcall CDeviceGraphObjectsStore::GetStreamGroupsConnectedToSaDevice(__int64 a1, __int64 a2, __int64 a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // r14
  Microsoft::WRL::Details::WeakReferenceImpl **v5; // rbx
  Microsoft::WRL::Details::WeakReferenceImpl **v6; // rdi
  unsigned int v7; // esi
  __int128 v9; // [rsp+20h] [rbp-40h]
  __int128 v10; // [rsp+40h] [rbp-20h] BYREF
  __int64 *v11; // [rsp+50h] [rbp-10h]
  unsigned int v12; // [rsp+90h] [rbp+30h] BYREF
  __int64 v13; // [rsp+98h] [rbp+38h] BYREF
  __int64 v14; // [rsp+A0h] [rbp+40h] BYREF

  v14 = a3;
  v13 = a2;
  v3 = (struct _RTL_CRITICAL_SECTION *)(a1 + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  v5 = *(Microsoft::WRL::Details::WeakReferenceImpl ***)(a1 + 64);
  v6 = *(Microsoft::WRL::Details::WeakReferenceImpl ***)(a1 + 56);
  v7 = 0;
  *(_QWORD *)&v9 = &v12;
  *((_QWORD *)&v9 + 1) = &v13;
  v11 = &v14;
  v12 = 0;
  v10 = v9;
  if ( v6 != v5 )
  {
    do
      lambda_c774dc0092cfa85ab52d91ce2e4bcbd2_::operator()((__int64)&v10, v6++);
    while ( v6 != v5 );
    v7 = v12;
  }
  if ( v3 )
    LeaveCriticalSection(v3);
  return v7;
}
