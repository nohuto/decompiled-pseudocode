/*
 * XREFs of ??1CPortClient@@UEAA@XZ @ 0x1800049F4
 * Callers:
 *     ??_ECPortClientRefCounted@@MEAAPEAXI@Z @ 0x180004240 (--_ECPortClientRefCounted@@MEAAPEAXI@Z.c)
 *     ??_ECPortClient@@UEAAPEAXI@Z @ 0x1800049C0 (--_ECPortClient@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Disconnect@CPortClient@@QEAAXXZ @ 0x180004A5C (-Disconnect@CPortClient@@QEAAXXZ.c)
 */

void __fastcall CPortClient::~CPortClient(HANDLE *this)
{
  HANDLE v2; // r8

  *this = &CPortClient::`vftable';
  CPortClient::Disconnect((CPortClient *)this);
  v2 = this[9];
  if ( v2 )
  {
    HeapFree(this[10], 0, v2);
    this[9] = 0LL;
  }
}
