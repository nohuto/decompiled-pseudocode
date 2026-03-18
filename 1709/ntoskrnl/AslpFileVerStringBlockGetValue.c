/*
 * XREFs of AslpFileVerStringBlockGetValue @ 0x140775C38
 * Callers:
 *     AslpFileQueryVersionString @ 0x1407757E4 (AslpFileQueryVersionString.c)
 * Callees:
 *     RtlStringCbLengthW @ 0x1400E0214 (RtlStringCbLengthW.c)
 *     AslpFileVerBlockGetValueOffset @ 0x14028D110 (AslpFileVerBlockGetValueOffset.c)
 */

NTSTATUS __fastcall AslpFileVerStringBlockGetValue(__int64 *a1, size_t *a2, __int64 a3, unsigned __int64 a4)
{
  NTSTATUS result; // eax
  size_t v9; // rcx
  __int64 v10; // r11
  size_t v11; // rbx
  unsigned __int64 v12; // [rsp+40h] [rbp+8h] BYREF
  size_t pcbLength; // [rsp+48h] [rbp+10h] BYREF

  *a1 = 0LL;
  *a2 = 0LL;
  v12 = 0LL;
  pcbLength = 0LL;
  result = AslpFileVerBlockGetValueOffset(&v12, a3, a4);
  if ( result >= 0 )
  {
    if ( v12 <= a4 )
    {
      if ( v12 == a4 )
      {
        v9 = 0LL;
        v10 = a3 + v12 - 2;
      }
      else
      {
        v11 = a4 - v12;
        if ( RtlStringCbLengthW((STRSAFE_PCNZWCH)(v12 + a3), v11, &pcbLength) >= 0 )
        {
          v9 = pcbLength;
        }
        else
        {
          v9 = v11 - 2;
          *(_WORD *)(v10 + 2 * ((v11 - 2) >> 1)) = 0;
        }
      }
      result = 0;
      *a2 = v9 >> 1;
      *a1 = v10;
    }
    else
    {
      return -1073741811;
    }
  }
  return result;
}
