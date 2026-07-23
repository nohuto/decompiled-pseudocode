/*
 * XREFs of KsepEvntLogShimsApplied @ 0x14024D0F8
 * Callers:
 *     KseDriverLoadImage @ 0x1405FE1AC (KseDriverLoadImage.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x14006DCF0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x1400BAE30 (RtlAppendUnicodeStringToString.c)
 *     EtwWriteEx @ 0x1400EF860 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1400F3870 (EtwEventEnabled.c)
 *     KsepPoolAllocatePaged @ 0x140161A68 (KsepPoolAllocatePaged.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     RtlStringFromGUIDEx @ 0x140518D58 (RtlStringFromGUIDEx.c)
 */

void __fastcall KsepEvntLogShimsApplied(unsigned __int16 *a1, __int64 a2, unsigned int a3)
{
  wchar_t *v3; // rbx
  __int64 v4; // rdi
  unsigned int v5; // r15d
  unsigned __int16 v8; // r14
  UNICODE_STRING *Paged; // rax
  UNICODE_STRING *v10; // rsi
  wchar_t *p_Length; // rdi
  UNICODE_STRING *v12; // rbx
  wchar_t *Buffer; // rcx
  int v14; // ebx
  unsigned int v15; // ecx
  ULONG v16; // eax
  unsigned int v17; // [rsp+40h] [rbp-49h] BYREF
  UNICODE_STRING Destination; // [rsp+48h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-29h] BYREF
  __int64 v20; // [rsp+70h] [rbp-19h]
  __int64 v21; // [rsp+78h] [rbp-11h]
  unsigned int *v22; // [rsp+80h] [rbp-9h]
  __int64 v23; // [rsp+88h] [rbp-1h]
  wchar_t *v24; // [rsp+90h] [rbp+7h]
  int v25; // [rsp+98h] [rbp+Fh]
  int v26; // [rsp+9Ch] [rbp+13h]

  v3 = 0LL;
  v4 = a3;
  v5 = 0;
  v17 = a3;
  *(_QWORD *)&Destination.Length = 0LL;
  Destination.Buffer = 0LL;
  v8 = 0;
  if ( KseEtwHandle && EtwEventEnabled(KseEtwHandle, &KseShimsApplied) && (_DWORD)v4 && a2 && a1 )
  {
    Paged = (UNICODE_STRING *)KsepPoolAllocatePaged(94 * v4);
    v10 = Paged;
    if ( Paged )
    {
      p_Length = &Paged[v17].Length;
      if ( v17 )
      {
        do
        {
          v12 = &v10[v5];
          v12->Buffer = p_Length;
          p_Length += 39;
          *(_DWORD *)&v12->Length = 5111808;
          RtlStringFromGUIDEx((PGUID)(a2 + 80LL * v5++), v12, 0);
          v8 += v12->Length + 4;
        }
        while ( v5 < v17 );
        if ( v8 )
        {
          Destination.Buffer = (wchar_t *)KsepPoolAllocatePaged(v8);
          Buffer = Destination.Buffer;
          if ( Destination.Buffer )
          {
            v14 = 0;
            Destination.MaximumLength = v8;
            if ( v17 )
            {
              while ( RtlAppendUnicodeStringToString(&Destination, &v10[v14]) >= 0 )
              {
                v15 = v17;
                if ( v14 != v17 - 1 )
                {
                  if ( RtlAppendUnicodeToString(&Destination, L"\n") < 0 )
                    break;
                  v15 = v17;
                }
                if ( ++v14 >= v15 )
                {
                  Buffer = Destination.Buffer;
                  goto LABEL_18;
                }
              }
            }
            else
            {
LABEL_18:
              UserData.Ptr = *((_QWORD *)a1 + 1);
              v16 = *a1 + 2;
              v21 = 4LL;
              UserData.Size = v16;
              v20 = a2 + 68;
              v22 = &v17;
              v23 = 4LL;
              v25 = Destination.Length + 2;
              v24 = Buffer;
              UserData.Reserved = 0;
              v26 = 0;
              EtwWriteEx(KseEtwHandle, &KseShimsApplied, 0LL, 0, 0LL, 0LL, 4u, &UserData);
            }
          }
        }
      }
      ExFreePoolWithTag(v10, 0x6145534Bu);
      _InterlockedIncrement(&dword_1403AD324);
      v3 = Destination.Buffer;
    }
    if ( v3 )
    {
      ExFreePoolWithTag(v3, 0x6145534Bu);
      _InterlockedIncrement(&dword_1403AD324);
    }
  }
}
