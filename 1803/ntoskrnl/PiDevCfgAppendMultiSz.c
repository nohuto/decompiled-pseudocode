/*
 * XREFs of PiDevCfgAppendMultiSz @ 0x14072ADB8
 * Callers:
 *     PiDevCfgConfigureDevice @ 0x1405CF9D8 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x1405DA154 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiDevCfgRequestDriverConfigurations @ 0x14072E104 (PiDevCfgRequestDriverConfigurations.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x1407310F0 (PpDevCfgProcessDeviceExtensions.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x14073D4AC (PiDrvDbResolveFilePathKeyValues.c)
 * Callees:
 *     PnpDuplicateUnicodeString @ 0x140147994 (PnpDuplicateUnicodeString.c)
 *     PnpMultiSzContainsString @ 0x140163168 (PnpMultiSzContainsString.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     RtlFreeAnsiString @ 0x1404BA0E0 (RtlFreeAnsiString.c)
 *     ExpAllocateStringRoutine @ 0x140518FA0 (ExpAllocateStringRoutine.c)
 */

__int64 __fastcall PiDevCfgAppendMultiSz(PUNICODE_STRING UnicodeString, const void **a2, const void **a3, char a4)
{
  unsigned int v4; // ebx
  unsigned int v9; // eax
  wchar_t *StringRoutine; // rax
  wchar_t *v11; // rcx
  unsigned __int16 v12; // ax
  unsigned int v13; // edx
  int Length; // ecx
  wchar_t *Buffer; // r12
  unsigned __int16 v16; // si
  unsigned __int64 v17; // rax
  _WORD *i; // r14
  __int64 v19; // rax
  unsigned int v20; // r15d
  UNICODE_STRING v21; // xmm0
  UNICODE_STRING UnicodeStringa; // [rsp+20h] [rbp-28h] BYREF

  v4 = 0;
  *(_DWORD *)&UnicodeStringa.Length = 0;
  UnicodeStringa.Buffer = 0LL;
  if ( UnicodeString->Buffer )
  {
    if ( a2 )
    {
      v13 = UnicodeString->Length + *(unsigned __int16 *)a2 + 2;
    }
    else
    {
      if ( !a3 )
        goto LABEL_38;
      Length = UnicodeString->Length;
      v13 = Length + *(unsigned __int16 *)a3;
      if ( (_WORD)Length )
        v13 -= 2;
    }
    if ( v13 > 0xFFFE )
      goto LABEL_4;
    UnicodeStringa.Buffer = (wchar_t *)ExpAllocateStringRoutine(v13);
    Buffer = UnicodeStringa.Buffer;
    if ( !UnicodeStringa.Buffer )
      goto LABEL_6;
    if ( UnicodeString->Length <= 2u )
    {
      v16 = 0;
    }
    else
    {
      memmove(UnicodeStringa.Buffer, UnicodeString->Buffer, UnicodeString->Length);
      v16 = UnicodeString->Length - 2;
    }
    if ( a2 )
    {
      if ( a4 || !PnpMultiSzContainsString(UnicodeString->Buffer, (const WCHAR *)a2[1]) )
      {
        memmove((char *)UnicodeStringa.Buffer + v16, a2[1], *(unsigned __int16 *)a2);
        v17 = (unsigned __int64)(unsigned __int16)(v16 + *(_WORD *)a2) >> 1;
        v16 += *(_WORD *)a2 + 2;
        UnicodeStringa.Buffer[v17] = 0;
      }
    }
    else if ( a3 )
    {
      if ( a4 )
      {
        memmove((char *)UnicodeStringa.Buffer + v16, a3[1], *(unsigned __int16 *)a3);
        v16 += *(_WORD *)a3 - 2;
      }
      else
      {
        for ( i = a3[1]; *i; i += (unsigned __int64)v20 >> 1 )
        {
          v19 = -1LL;
          do
            ++v19;
          while ( i[v19] );
          v20 = 2 * v19 + 2;
          if ( !PnpMultiSzContainsString(UnicodeString->Buffer, i) )
          {
            memmove((char *)UnicodeStringa.Buffer + v16, i, v20);
            v16 += v20;
          }
        }
      }
    }
    UnicodeStringa.Length = v16 + 2;
    UnicodeStringa.MaximumLength = v16 + 2;
    Buffer[(unsigned __int64)v16 >> 1] = 0;
    RtlFreeAnsiString(UnicodeString);
    v21 = UnicodeStringa;
    *(_QWORD *)&UnicodeStringa.Length = 0LL;
    *UnicodeString = v21;
    UnicodeStringa.Buffer = 0LL;
    goto LABEL_39;
  }
  if ( !a2 )
  {
    if ( a3 )
    {
      if ( PnpDuplicateUnicodeString((__int64)UnicodeString, (__int64)a3) )
        goto LABEL_39;
      goto LABEL_6;
    }
LABEL_38:
    v4 = -1073741811;
    goto LABEL_39;
  }
  v9 = *(unsigned __int16 *)a2 + 4;
  if ( v9 > 0xFFFE )
  {
LABEL_4:
    v4 = -2147483643;
    goto LABEL_39;
  }
  StringRoutine = (wchar_t *)ExpAllocateStringRoutine(v9);
  UnicodeString->Buffer = StringRoutine;
  v11 = StringRoutine;
  if ( !StringRoutine )
  {
LABEL_6:
    v4 = -1073741670;
    goto LABEL_39;
  }
  v12 = *(_WORD *)a2;
  UnicodeString->Length = *(_WORD *)a2;
  if ( *(_WORD *)a2 )
  {
    memmove(v11, a2[1], *(unsigned __int16 *)a2);
    UnicodeString->Buffer[(unsigned __int64)UnicodeString->Length >> 1] = 0;
    UnicodeString->Length += 2;
    v12 = UnicodeString->Length;
    v11 = UnicodeString->Buffer;
  }
  v11[(unsigned __int64)v12 >> 1] = 0;
  UnicodeString->Length += 2;
  UnicodeString->MaximumLength = UnicodeString->Length;
LABEL_39:
  RtlFreeAnsiString(&UnicodeStringa);
  return v4;
}
