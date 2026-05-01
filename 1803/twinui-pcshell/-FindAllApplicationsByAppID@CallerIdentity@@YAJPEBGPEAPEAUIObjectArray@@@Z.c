/*
 * XREFs of ?FindAllApplicationsByAppID@CallerIdentity@@YAJPEBGPEAPEAUIObjectArray@@@Z @ 0x1802FD340
 * Callers:
 *     CallerIdentity::ApiPolicyChecker::_ForEachApplicationByAppID__lambda_08e0ad7d3f542f4c585566fc1a529b01___ @ 0x1802FDA68 (CallerIdentity--ApiPolicyChecker--_ForEachApplicationByAppID__lambda_08e0ad7d3f542f4c585566fc1a5.c)
 *     CallerIdentity::ApiPolicyChecker::_ForEachApplicationByAppID__lambda_aa196f3dd7e8ba47a7385d927b222f3d___ @ 0x1802FDB5C (CallerIdentity--ApiPolicyChecker--_ForEachApplicationByAppID__lambda_aa196f3dd7e8ba47a7385d927b2.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     CoCreateInstance_0 @ 0x1800994FD (CoCreateInstance_0.c)
 *     ?FindAllApplicationsByAppID@CallerIdentity@@YAJPEAUIUnknown@@PEBGPEAPEAUIObjectArray@@@Z @ 0x1802FD274 (-FindAllApplicationsByAppID@CallerIdentity@@YAJPEAUIUnknown@@PEBGPEAPEAUIObjectArray@@@Z.c)
 */

__int64 __fastcall CallerIdentity::FindAllApplicationsByAppID(
        struct IUnknown *this,
        const unsigned __int16 *a2,
        struct IObjectArray **a3)
{
  HRESULT Instance_0; // ebx
  struct IObjectArray **v6; // r9
  CallerIdentity *ppv; // [rsp+48h] [rbp+10h] BYREF

  *(_QWORD *)a2 = 0LL;
  ppv = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  Instance_0 = CoCreateInstance_0(
                 &GUID_c2f03a33_21f5_47fa_b4bb_156362a2f239,
                 0LL,
                 0x404u,
                 &GUID_6d5140c1_7436_11ce_8034_00aa006009fa,
                 (LPVOID *)&ppv);
  if ( Instance_0 >= 0 )
    Instance_0 = CallerIdentity::FindAllApplicationsByAppID(ppv, this, a2, v6);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  return (unsigned int)Instance_0;
}
