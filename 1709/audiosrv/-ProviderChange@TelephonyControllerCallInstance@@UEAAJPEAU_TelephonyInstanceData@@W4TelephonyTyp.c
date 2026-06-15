/*
 * XREFs of ?ProviderChange@TelephonyControllerCallInstance@@UEAAJPEAU_TelephonyInstanceData@@W4TelephonyTypeChangeOp@@@Z @ 0x1800EF330
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?VerifyAndSetCallType@TelephonyControllerCallInstance@@AEAAJPEAU_TelephonyInstanceData@@@Z @ 0x1800EF5CC (-VerifyAndSetCallType@TelephonyControllerCallInstance@@AEAAJPEAU_TelephonyInstanceData@@@Z.c)
 */

__int64 __fastcall TelephonyControllerCallInstance::ProviderChange(
        __int64 a1,
        struct _TelephonyInstanceData *a2,
        int a3)
{
  __int64 result; // rax
  int v5; // edi
  int v6; // r10d
  int v7; // r8d
  int v8; // r11d
  __int64 v9; // rcx
  GUID v10; // [rsp+40h] [rbp-20h] BYREF
  int v11; // [rsp+50h] [rbp-10h]
  int v12; // [rsp+54h] [rbp-Ch]
  char v13; // [rsp+78h] [rbp+18h] BYREF
  __int64 v14; // [rsp+88h] [rbp+28h] BYREF

  v14 = 0LL;
  if ( !a2 )
    return 2147500035LL;
  v5 = *(_DWORD *)(a1 + 48);
  v6 = 2;
  if ( *(_DWORD *)a2 )
  {
    if ( *(_DWORD *)a2 == 1 )
    {
      LODWORD(v14) = 1;
    }
    else
    {
      if ( *(_DWORD *)a2 != 2 )
        return 2147943568LL;
      LODWORD(v14) = 2;
    }
  }
  else
  {
    LODWORD(v14) = 0;
  }
  if ( a3 )
  {
    v7 = a3 - 1;
    if ( v7 )
    {
      if ( v7 != 1 )
        return 2147943568LL;
      *(_DWORD *)(a1 + 48) = *(_DWORD *)(a1 + 52);
      HIDWORD(v14) = 2;
    }
    else
    {
      *(_DWORD *)(a1 + 52) = v5;
      result = TelephonyControllerCallInstance::VerifyAndSetCallType((TelephonyControllerCallInstance *)a1, a2);
      if ( (int)result < 0 )
        return result;
      HIDWORD(v14) = v8;
    }
  }
  else
  {
    HIDWORD(v14) = 0;
  }
  v9 = *(_QWORD *)(a1 + 40);
  v10 = GUID_b6df7eb1_d099_489f_a6a0_c0106f0887a7;
  v11 = 3;
  v12 = v6;
  result = (*(__int64 (__fastcall **)(__int64, GUID *, __int64, __int64 *, int, char *))(*(_QWORD *)v9 + 24LL))(
             v9,
             &v10,
             24LL,
             &v14,
             8,
             &v13);
  if ( (int)result < 0 )
    *(_DWORD *)(a1 + 48) = v5;
  return result;
}
