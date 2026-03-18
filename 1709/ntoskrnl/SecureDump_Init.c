/*
 * XREFs of SecureDump_Init @ 0x140151768
 * Callers:
 *     IopInitCrashDumpDuringSysInit @ 0x14084DBF4 (IopInitCrashDumpDuringSysInit.c)
 * Callees:
 *     BCryptCloseAlgorithmProvider @ 0x140147534 (BCryptCloseAlgorithmProvider.c)
 *     SecureDump_EncryptSymmetricKeyWithPublicKey @ 0x1401FC474 (SecureDump_EncryptSymmetricKeyWithPublicKey.c)
 *     SecureDump_SymmetricEncryptionSetup @ 0x1401FCA14 (SecureDump_SymmetricEncryptionSetup.c)
 *     BCryptDestroyKey @ 0x14025DAF0 (BCryptDestroyKey.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SecureDump_Init(__int64 a1, ULONG a2)
{
  int v2; // ebx

  v2 = 0;
  if ( SecureDmpEncryptionContext == 1 )
  {
    if ( !dword_140387F1C )
    {
      byte_140387F14 = 0;
LABEL_4:
      SecureDmpEncryptionContext = 2;
      goto LABEL_5;
    }
    byte_140387F14 = 1;
    v2 = SecureDump_SymmetricEncryptionSetup();
    if ( v2 >= 0 )
    {
      v2 = SecureDump_EncryptSymmetricKeyWithPublicKey();
      if ( v2 >= 0 )
      {
        a2 = (dword_140387F2C + pcbResult + 8279) & 0xFFFFF000;
        dword_140387F60 = a2;
        goto LABEL_4;
      }
    }
  }
LABEL_5:
  switch ( SecureDmpEncryptionContext )
  {
    case 3:
      v2 = -1073741823;
      break;
    case 2:
      return 0LL;
    case 0:
      return 3221225488LL;
    default:
      if ( v2 < 0 )
      {
        byte_140387F14 = 0;
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
        if ( P )
        {
          ExFreePoolWithTag(P, 0);
          P = 0LL;
        }
        if ( qword_140387F30 )
        {
          ExFreePoolWithTag(qword_140387F30, 0);
          qword_140387F30 = 0LL;
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
  return (unsigned int)v2;
}
