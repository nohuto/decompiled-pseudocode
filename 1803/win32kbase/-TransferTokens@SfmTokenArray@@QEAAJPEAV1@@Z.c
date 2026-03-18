/*
 * XREFs of ?TransferTokens@SfmTokenArray@@QEAAJPEAV1@@Z @ 0x1C004D5B0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddNotificationTokens@SfmTokenArray@@QEAAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@I@Z @ 0x1C004D530 (-AddNotificationTokens@SfmTokenArray@@QEAAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@I@Z.c)
 */

__int64 __fastcall SfmTokenArray::TransferTokens(SfmTokenArray *this, struct SfmTokenArray *a2)
{
  int v2; // r8d
  __int64 result; // rax

  v2 = *((_DWORD *)a2 + 3);
  result = 0LL;
  if ( v2 )
  {
    result = SfmTokenArray::AddNotificationTokens(this, *(struct _D3DKMT_PRESENTHISTORYTOKEN **)a2, v2);
    *((_DWORD *)a2 + 3) = 0;
  }
  return result;
}
