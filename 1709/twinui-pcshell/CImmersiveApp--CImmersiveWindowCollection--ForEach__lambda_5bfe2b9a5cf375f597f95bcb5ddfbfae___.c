/*
 * XREFs of CImmersiveApp::CImmersiveWindowCollection::ForEach__lambda_5bfe2b9a5cf375f597f95bcb5ddfbfae___ @ 0x18005DBF0
 * Callers:
 *     ?QueryService@CImmersiveApp@@UEAAJW4IMMERSIVE_APPLICATION_QUERY_SERVICE_OPTION@@KAEBU_GUID@@1PEAPEAX@Z @ 0x180056190 (-QueryService@CImmersiveApp@@UEAAJW4IMMERSIVE_APPLICATION_QUERY_SERVICE_OPTION@@KAEBU_GUID@@1PEA.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

_DWORD *__fastcall CImmersiveApp::CImmersiveWindowCollection::ForEach__lambda_5bfe2b9a5cf375f597f95bcb5ddfbfae___(
        __int64 a1,
        __int64 a2)
{
  _DWORD *result; // rax
  unsigned __int64 v3; // r15
  __int64 v4; // r14
  char v7; // bp
  int v8; // ecx
  __int64 v9; // rdi
  int v10; // ecx
  __int64 v11; // rax
  __int64 *v12; // rbx
  __int64 v13; // rcx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = &retaddr;
  v3 = *(_QWORD *)(a1 + 160);
  v4 = 0LL;
  v7 = 1;
  if ( v3 )
  {
    while ( 1 )
    {
      if ( !v7 )
        return result;
      result = *(_DWORD **)(a1 + 152);
      v7 = 1;
      v8 = *(_DWORD *)(a2 + 16);
      v9 = *(_QWORD *)&result[2 * v4];
      if ( !v8 )
        break;
      v10 = v8 - 1;
      if ( !v10 )
        break;
      if ( v10 != 1 )
        goto LABEL_15;
      v11 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v9 + 32LL))(*(_QWORD *)&result[2 * v4]);
      result = (_DWORD *)CoreIsWindowServiceSupported(v11, a2 + 20);
      if ( (int)result >= 0 )
      {
        v12 = *(__int64 **)(a2 + 8);
        if ( *v12 != v9 )
        {
LABEL_11:
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
          goto LABEL_12;
        }
        goto LABEL_14;
      }
LABEL_16:
      if ( ++v4 >= v3 )
        return result;
    }
    v12 = *(__int64 **)(a2 + 8);
    if ( *v12 != v9 )
    {
      if ( v9 )
        goto LABEL_11;
LABEL_12:
      v13 = *v12;
      *v12 = v9;
      if ( v13 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
LABEL_14:
    result = *(_DWORD **)a2;
    **(_DWORD **)a2 = 0;
LABEL_15:
    v7 = 0;
    goto LABEL_16;
  }
  return result;
}
