/*
 * XREFs of ??$?0$0DM@@StringReference@Internal@Windows@@QEAA@AEAY0DM@$$CBG@Z @ 0x18008C068
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c999dea8893325250a33bf4039428575___::Run @ 0x18008BF70 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_c999dea8893325250a33bf4039428575___--Run.c)
 *     _lambda_e4ee804990591e655a0497df19d4e172_::operator() @ 0x1801F1640 (_lambda_e4ee804990591e655a0497df19d4e172_--operator().c)
 * Callees:
 *     <none>
 */

HSTRING *__fastcall Windows::Internal::StringReference::StringReference(
        HSTRING *string,
        const unsigned __int16 (*a2)[60])
{
  if ( WindowsCreateStringReference(
         L"Windows.Internal.CapabilityAccess.AppLaunchCapabilityAccess",
         0x3Bu,
         (HSTRING_HEADER *)(string + 1),
         string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  return string;
}
