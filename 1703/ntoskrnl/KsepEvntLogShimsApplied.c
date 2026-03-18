/*
 * XREFs of KsepEvntLogShimsApplied @ 0x140153258
 * Callers:
 *     KseDriverLoadImage @ 0x1404B4B60 (KseDriverLoadImage.c)
 * Callees:
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     RtlAppendUnicodeToString @ 0x14004BFF0 (RtlAppendUnicodeToString.c)
 *     KsepPoolAllocatePaged @ 0x14006D900 (KsepPoolAllocatePaged.c)
 *     RtlAppendUnicodeStringToString @ 0x140080110 (RtlAppendUnicodeStringToString.c)
 *     EtwWriteEx @ 0x140094690 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     RtlStringFromGUID @ 0x1404C2C60 (RtlStringFromGUID.c)
 *     RtlFreeUnicodeString @ 0x140541820 (RtlFreeUnicodeString.c)
 */

void __fastcall KsepEvntLogShimsApplied(unsigned __int16 *a1, __int64 a2, unsigned int a3)
{
  wchar_t *v3; // rbx
  unsigned __int16 v7; // di
  UNICODE_STRING *Paged; // rsi
  UNICODE_STRING *v9; // r14
  int v10; // ebx
  unsigned int v11; // ecx
  ULONG v12; // eax
  unsigned int i; // ebx
  UNICODE_STRING *v14; // rcx
  unsigned int v15; // [rsp+40h] [rbp-59h] BYREF
  UNICODE_STRING Destination; // [rsp+48h] [rbp-51h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-39h] BYREF
  __int64 v18; // [rsp+70h] [rbp-29h]
  __int64 v19; // [rsp+78h] [rbp-21h]
  unsigned int *v20; // [rsp+80h] [rbp-19h]
  __int64 v21; // [rsp+88h] [rbp-11h]
  wchar_t *Buffer; // [rsp+90h] [rbp-9h]
  int v23; // [rsp+98h] [rbp-1h]
  int v24; // [rsp+9Ch] [rbp+3h]

  v3 = 0LL;
  v15 = a3;
  *(_QWORD *)&Destination.Length = 0LL;
  Destination.Buffer = 0LL;
  v7 = 0;
  if ( KseEtwHandle && EtwEventEnabled(KseEtwHandle, &KseShimsApplied) && a3 && a2 && a1 )
  {
    Paged = (UNICODE_STRING *)KsepPoolAllocatePaged(16LL * a3);
    if ( Paged )
    {
      if ( v15 )
      {
        while ( 1 )
        {
          v9 = &Paged[(unsigned int)v3];
          if ( RtlStringFromGUID((const GUID *const)(a2 + 80LL * (_QWORD)v3), v9) < 0 )
            break;
          v3 = (wchar_t *)(unsigned int)((_DWORD)v3 + 1);
          v7 += v9->Length + 4;
          if ( (unsigned int)v3 >= v15 )
          {
            if ( v7 )
            {
              Destination.Buffer = (wchar_t *)KsepPoolAllocatePaged(v7);
              if ( Destination.Buffer )
              {
                v10 = 0;
                Destination.MaximumLength = v7;
                while ( RtlAppendUnicodeStringToString(&Destination, &Paged[v10]) >= 0 )
                {
                  v11 = v15;
                  if ( v10 != v15 - 1 )
                  {
                    if ( RtlAppendUnicodeToString(&Destination, L"\n") < 0 )
                      goto LABEL_17;
                    v11 = v15;
                  }
                  if ( ++v10 >= v11 )
                  {
                    UserData.Ptr = *((_QWORD *)a1 + 1);
                    v12 = *a1 + 2;
                    Buffer = Destination.Buffer;
                    UserData.Size = v12;
                    v18 = a2 + 68;
                    v20 = &v15;
                    UserData.Reserved = 0;
                    v23 = Destination.Length + 2;
                    v19 = 4LL;
                    v21 = 4LL;
                    v24 = 0;
                    EtwWriteEx(KseEtwHandle, &KseShimsApplied, 0LL, 0, 0LL, 0LL, 4u, &UserData);
                    goto LABEL_17;
                  }
                }
              }
            }
            break;
          }
        }
      }
LABEL_17:
      for ( i = 0; i < v15; ++i )
      {
        v14 = &Paged[i];
        if ( v14->Buffer )
          RtlFreeUnicodeString(v14);
      }
      ExFreePoolWithTag(Paged, 0x6145534Bu);
      _InterlockedIncrement(&dword_14034F7E4);
      v3 = Destination.Buffer;
    }
    if ( v3 )
    {
      ExFreePoolWithTag(v3, 0x6145534Bu);
      _InterlockedIncrement(&dword_14034F7E4);
    }
  }
}
