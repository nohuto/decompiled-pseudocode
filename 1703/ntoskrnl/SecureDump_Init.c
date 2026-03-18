/*
 * XREFs of SecureDump_Init @ 0x140159F28
 * Callers:
 *     IopInitCrashDumpDuringSysInit @ 0x1408137A4 (IopInitCrashDumpDuringSysInit.c)
 * Callees:
 *     BCryptCloseAlgorithmProvider @ 0x140156F90 (BCryptCloseAlgorithmProvider.c)
 *     SecureDump_EncryptSymmetricKeyWithPublicKey @ 0x1401F6618 (SecureDump_EncryptSymmetricKeyWithPublicKey.c)
 *     SecureDump_SymmetricEncryptionSetup @ 0x1401F6B94 (SecureDump_SymmetricEncryptionSetup.c)
 *     BCryptDestroyKey @ 0x1402463B4 (BCryptDestroyKey.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SecureDump_Init(__int64 a1, ULONG a2)
{
  int v2; // eax
  int v3; // ebx

  v2 = SecureDmpEncryptionContext;
  v3 = 0;
  if ( SecureDmpEncryptionContext == 1 )
  {
    if ( !dword_14036BC1C )
    {
      byte_14036BC40 = 0;
LABEL_4:
      v2 = 2;
      SecureDmpEncryptionContext = 2;
      goto LABEL_5;
    }
    byte_14036BC40 = 1;
    v3 = SecureDump_SymmetricEncryptionSetup();
    if ( v3 >= 0 )
    {
      v3 = SecureDump_EncryptSymmetricKeyWithPublicKey();
      if ( v3 >= 0 )
      {
        a2 = (dword_14036BC38 + pcbResult + 8279) & 0xFFFFF000;
        dword_14036BC74 = a2;
        goto LABEL_4;
      }
    }
    v2 = SecureDmpEncryptionContext;
  }
LABEL_5:
  switch ( v2 )
  {
    case 3:
      v3 = -1073741823;
      break;
    case 2:
      return 0LL;
    case 0:
      return 3221225488LL;
    default:
      if ( v3 < 0 )
      {
        byte_14036BC40 = 0;
        if ( hAlgorithm )
        {
          BCryptCloseAlgorithmProvider(hAlgorithm, a2);
          hAlgorithm = 0LL;
        }
        if ( hObject )
        {
          BCryptDestroyKey(hObject);
          hObject = 0LL;
        }
        if ( qword_14036BC48 )
        {
          ExFreePoolWithTag(qword_14036BC48, 0);
          qword_14036BC48 = 0LL;
        }
        if ( qword_14036BC30 )
        {
          ExFreePoolWithTag(qword_14036BC30, 0);
          qword_14036BC30 = 0LL;
        }
        if ( pbInput )
        {
          ExFreePoolWithTag(pbInput, 0);
          pbInput = 0LL;
        }
        SecureDmpEncryptionContext = 3;
      }
      break;
  }
  return (unsigned int)v3;
}
