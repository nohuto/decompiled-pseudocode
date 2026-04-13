/*
 * XREFs of ?GetIids@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x180041620
 * Callers:
 *     ?GetIids@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@WBA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x180048C20 (-GetIids@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@WBA@EAAJPEAKPEAPEAU.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::GetIids(
        ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl *this,
        unsigned int *a2,
        struct _GUID **a3)
{
  unsigned int v3; // ebx
  struct _GUID *v6; // rax

  v3 = 0;
  *a3 = 0LL;
  *a2 = 0;
  v6 = (struct _GUID *)CoTaskMemAlloc(0x20uLL);
  if ( v6 )
  {
    *v6 = GUID_d5343860_de91_4cae_b38a_84536a72847c;
    v6[1] = GUID_00000038_0000_0000_c000_000000000046;
    *a2 = 2;
    *a3 = v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
