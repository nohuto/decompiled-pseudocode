/*
 * XREFs of ?ReadV1FilterList@BindStack@Ndis@@AEAAJAEAVKRegKey@@@Z @ 0x1C00FB058
 * Callers:
 *     ?ReadV1InterfaceBindings@BindStack@Ndis@@AEAA_NPEAU_DEVICE_OBJECT@@@Z @ 0x1C00FB0F4 (-ReadV1InterfaceBindings@BindStack@Ndis@@AEAA_NPEAU_DEVICE_OBJECT@@@Z.c)
 * Callees:
 *     KRegKey::QueryValueMultisz__lambda_43d9c6f647151fdb2f2362c6d885aaea___lambda_ac55aedf94f20521cfbcaaf74fbc728b___ @ 0x1C00FA9F4 (KRegKey--QueryValueMultisz__lambda_43d9c6f647151fdb2f2362c6d885aaea___lambda_ac55aedf94f20521cfb.c)
 */

__int64 __fastcall Ndis::BindStack::ReadV1FilterList(Ndis::BindStack *this, struct KRegKey *a2)
{
  unsigned int v2; // ebx
  const wchar_t *v3; // rax
  __int64 v5; // r8
  unsigned int v6; // ecx
  __int16 v7; // r9
  _UNICODE_STRING v9; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0;
  *(_DWORD *)&v9.Length = 0;
  v9.Buffer = 0LL;
  v3 = L"FilterList";
  v5 = 0x7FFFLL;
  do
  {
    if ( !*v3 )
      break;
    ++v3;
    --v5;
  }
  while ( v5 );
  v6 = -1073741811;
  if ( v5 )
  {
    v6 = 0;
    v7 = 0x7FFF - v5;
  }
  else
  {
    v7 = 0;
  }
  if ( v5 )
  {
    v9.Buffer = L"FilterList";
    v9.Length = 2 * v7;
    v9.MaximumLength = 2 * v7 + 2;
    v6 = KRegKey::QueryValueMultisz__lambda_43d9c6f647151fdb2f2362c6d885aaea___lambda_ac55aedf94f20521cfbcaaf74fbc728b___(
           &a2->m_ptr,
           &v9,
           &this->Protocols.m_bufferSize,
           this);
  }
  if ( v6 != -1073741772 )
    return v6;
  return v2;
}
