/*
 * XREFs of CTSimpleFixedArray_ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification_CSimpleArrayStandardCompareHelper_ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification___::FindEx_CLambdaCompareHelper__lambda_ca95877a0acb9673608c45b7c9bea6a2_____ @ 0x18007CA00
 * Callers:
 *     ?OnApplicationViewChanged@ApplicationViewManagerVisibilityDebouncer@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18007B830 (-OnApplicationViewChanged@ApplicationViewManagerVisibilityDebouncer@@UEAAJPEAUIApplicationView@@.c)
 * Callees:
 *     SHIsSameObject @ 0x18002748C (SHIsSameObject.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CTSimpleFixedArray_ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification_CSimpleArrayStandardCompareHelper_ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification___::FindEx_CLambdaCompareHelper__lambda_ca95877a0acb9673608c45b7c9bea6a2_____(
        __int64 *a1,
        __int64 (__fastcall *****a2)(_QWORD, GUID *, __int64 *),
        _QWORD *a3,
        _QWORD *a4)
{
  __int64 v8; // rsi
  __int64 i; // rdi
  __int64 v10; // rcx
  __int64 v11; // rbx
  int (__fastcall ***v12)(_QWORD, GUID *, __int64 *); // rcx
  int v13; // r8d
  __int64 v14; // rdx
  int v15; // eax
  BOOL v16; // ebx
  int (__fastcall ***v18)(_QWORD, GUID *, __int64 *); // [rsp+28h] [rbp-48h]
  int v19; // [rsp+30h] [rbp-40h]
  __int64 v20; // [rsp+38h] [rbp-38h]
  __int64 v21; // [rsp+48h] [rbp-28h]
  __int64 v22; // [rsp+58h] [rbp-18h]

  *a4 = 0LL;
  v8 = 0LL;
  if ( !a1[1] )
    return 2147647531LL;
  for ( i = 0LL; ; i += 32LL )
  {
    v21 = *a3;
    if ( *a3 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
    v10 = a3[2];
    v22 = v10;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
    v11 = *a1;
    v12 = *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(i + *a1);
    v18 = v12;
    if ( v12 )
    {
      ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v12)[1])(v12);
      v12 = v18;
    }
    v13 = *(_DWORD *)(i + v11 + 8);
    v19 = v13;
    v14 = *(_QWORD *)(i + v11 + 16);
    v20 = v14;
    if ( v14 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
      v14 = v20;
      v13 = v19;
      v12 = v18;
    }
    v16 = 1;
    if ( v13 == 1 )
    {
      v15 = SHIsSameObject(v12, **a2);
      v14 = v20;
      v12 = v18;
      if ( v15 )
        v16 = 0;
    }
    if ( v14 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      v12 = v18;
    }
    if ( v12 )
      ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v12)[2])(v12);
    if ( v22 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    if ( v21 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    if ( !v16 )
      break;
    if ( ++v8 >= (unsigned __int64)a1[1] )
      return 2147647531LL;
  }
  *a4 = v8;
  return 0LL;
}
