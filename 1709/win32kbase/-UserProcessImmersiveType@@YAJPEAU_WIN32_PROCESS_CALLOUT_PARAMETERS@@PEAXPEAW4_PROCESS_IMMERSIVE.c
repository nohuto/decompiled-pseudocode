/*
 * XREFs of ?UserProcessImmersiveType@@YAJPEAU_WIN32_PROCESS_CALLOUT_PARAMETERS@@PEAXPEAW4_PROCESS_IMMERSIVE_TYPE@@PEAKPEAH@Z @ 0x1C00808DC
 * Callers:
 *     xxxUserProcessCallout @ 0x1C003ADD0 (xxxUserProcessCallout.c)
 * Callees:
 *     ?AppModelPolicy_GetPolicy_Internal@@YAJPEAXW4AppModelPolicy_Type@@PEAW4AppModelPolicy_PolicyValue@@PEAU_PS_PKG_CLAIM@@PEA_K@Z @ 0x1C0084C00 (-AppModelPolicy_GetPolicy_Internal@@YAJPEAXW4AppModelPolicy_Type@@PEAW4AppModelPolicy_PolicyValu.c)
 */

int __fastcall UserProcessImmersiveType(
        struct _WIN32_PROCESS_CALLOUT_PARAMETERS *a1,
        void *a2,
        enum _PROCESS_IMMERSIVE_TYPE *a3,
        PVOID *a4,
        int *a5)
{
  int result; // eax
  __int64 v10; // rdx
  void *ProcessSectionBaseAddress; // rax
  PIMAGE_NT_HEADERS v12; // rax
  WORD NumberOfSections; // cx
  WORD v14; // ax
  void *v15; // rdi
  char *v16; // rdi
  char v17[4]; // [rsp+30h] [rbp-58h] BYREF
  WORD v18; // [rsp+34h] [rbp-54h]
  WORD v19; // [rsp+38h] [rbp-50h]
  PVOID TokenInformation; // [rsp+3Ch] [rbp-4Ch] BYREF
  void *Source1; // [rsp+48h] [rbp-40h]
  char v22[8]; // [rsp+50h] [rbp-38h] BYREF
  char v23[24]; // [rsp+58h] [rbp-30h] BYREF

  result = SeQueryInformationToken(a2, TokenAppContainerNumber, a4);
  if ( result >= 0 )
  {
    result = SeQueryInformationToken(a2, TokenIntegrityLevel, &TokenInformation);
    if ( result >= 0 )
    {
      result = (unsigned __int16)AppModelPolicy_GetPolicy_Internal(a2, v10, (char *)&TokenInformation + 4, v23, v22);
      if ( (_WORD)result )
        result = (unsigned __int16)result | 0xC0070000;
      if ( result >= 0 )
      {
        PsQueryProcessAttributesByToken(a2, v17, 0LL);
        *a5 = (unsigned __int8)v17[0];
        if ( (*((_DWORD *)a1 + 2) & 2) != 0 )
        {
          ProcessSectionBaseAddress = (void *)PsGetProcessSectionBaseAddress(*(_QWORD *)a1);
          v12 = RtlImageNtHeader(ProcessSectionBaseAddress);
          if ( !v12 )
            return -1073741823;
          Source1 = (char *)&v12->OptionalHeader + v12->FileHeader.SizeOfOptionalHeader;
          NumberOfSections = v12->FileHeader.NumberOfSections;
          v19 = NumberOfSections;
          v14 = 0;
          LOBYTE(v15) = (_BYTE)Source1;
          while ( 1 )
          {
            v18 = v14;
            if ( v14 >= NumberOfSections )
              break;
            if ( ((unsigned __int8)v15 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            v16 = (char *)Source1;
            if ( RtlCompareMemory(Source1, ".imrsiv", 8uLL) == 8 )
            {
              if ( *(_DWORD *)a4 )
              {
                *a5 = 1;
                *(_DWORD *)a3 = 1;
                return 0;
              }
              else if ( (unsigned int)TokenInformation < 0x2000 )
              {
                return -1073741823;
              }
              else
              {
                *(_DWORD *)a3 = 2;
                return 0;
              }
            }
            v15 = v16 + 40;
            Source1 = v15;
            v14 = v18 + 1;
            NumberOfSections = v19;
          }
        }
        if ( *a5 )
        {
          if ( !*(_DWORD *)a4 || HIDWORD(TokenInformation) == 196608 )
            *a5 = 0;
          else
            *(_DWORD *)a3 = 1;
        }
        return 0;
      }
    }
  }
  return result;
}
