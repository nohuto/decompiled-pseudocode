/*
 * XREFs of ?GetChannelHandle@CAnimation@@UEAAIXZ @ 0x1800BC550
 * Callers:
 *     ?UnregisterAnimateResource@CComposition@@QEAAJPEAUIAnimationResource@@@Z @ 0x18005BD2C (-UnregisterAnimateResource@CComposition@@QEAAJPEAUIAnimationResource@@@Z.c)
 *     ?RegisterAnimateResource@CComposition@@QEAAJPEAUIAnimationResource@@@Z @ 0x18005BE40 (-RegisterAnimateResource@CComposition@@QEAAJPEAUIAnimationResource@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAnimation::GetChannelHandle(CAnimation *this)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *((_QWORD *)this - 1);
  result = 0LL;
  if ( v1 )
    return *(unsigned int *)(v1 + 16);
  return result;
}
