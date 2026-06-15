/*
 * XREFs of ?Initialize@AvoidEndpointPolicyRule@@UEAAJPEAUIAudioProcess@@PEAG@Z @ 0x1800FC3F0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x180030C18 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x18005587C (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 */

__int64 __fastcall AvoidEndpointPolicyRule::Initialize(struct IUnknown **this, struct IUnknown *a2, char *a3)
{
  const void **v5; // rcx
  __int64 v6; // r8
  __int64 v8; // rax

  v5 = (const void **)(this + 4);
  v6 = 0LL;
  if ( a3 )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( *(_WORD *)&a3[2 * v8] );
    v6 = (unsigned int)v8;
  }
  ATL::CSimpleStringT<unsigned short,0>::SetString(v5, a3, v6);
  if ( this[3] != a2 )
    ATL::AtlComPtrAssign(this + 3, a2);
  return 0LL;
}
