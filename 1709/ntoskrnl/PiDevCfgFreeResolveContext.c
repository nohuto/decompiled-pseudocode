/*
 * XREFs of PiDevCfgFreeResolveContext @ 0x1405895E4
 * Callers:
 *     PiDevCfgConfigureDeviceKeys @ 0x140589470 (PiDevCfgConfigureDeviceKeys.c)
 *     PiDevCfgInitResolveContext @ 0x140589A68 (PiDevCfgInitResolveContext.c)
 *     PiDevCfgVerifyDeviceAllowed @ 0x1405A4A80 (PiDevCfgVerifyDeviceAllowed.c)
 * Callees:
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     RtlFreeUnicodeString @ 0x14053F140 (RtlFreeUnicodeString.c)
 *     _RegRtlDeleteTreeInternal @ 0x14057E5D0 (_RegRtlDeleteTreeInternal.c)
 */

void __fastcall PiDevCfgFreeResolveContext(__int64 a1)
{
  void *v2; // rcx
  unsigned int i; // edi
  __int64 v4; // rcx
  UNICODE_STRING *v5; // rbx
  __int64 v6; // rax
  char *Buffer; // rcx
  int v8; // edx
  __int64 v9; // r8

  if ( *(_QWORD *)(a1 + 24) )
  {
    for ( i = 0; i < 0x7F; ++i )
    {
      while ( 1 )
      {
        v4 = *(_QWORD *)(a1 + 24) + 16LL * i;
        if ( *(_QWORD *)v4 == v4 )
          break;
        v5 = *(UNICODE_STRING **)v4;
        if ( *(_QWORD *)(*(_QWORD *)v4 + 8LL) != v4
          || (v6 = *(_QWORD *)&v5->Length, *(UNICODE_STRING **)(*(_QWORD *)&v5->Length + 8LL) != v5) )
        {
          __fastfail(3u);
        }
        *(_QWORD *)v4 = v6;
        *(_QWORD *)(v6 + 8) = v4;
        RtlFreeUnicodeString(v5 + 1);
        Buffer = (char *)v5[2].Buffer;
        if ( Buffer )
        {
          v8 = *(_DWORD *)&v5[2].Length;
          if ( (_WORD)v8 == 0x8000 )
          {
            if ( (v8 & 0x100000) != 0 )
            {
              if ( *(_QWORD *)&PiPnpRtlCtx && **(_QWORD **)&PiPnpRtlCtx )
                v9 = *(_QWORD *)(**(_QWORD **)&PiPnpRtlCtx + 8LL);
              else
                v9 = 0LL;
              RegRtlDeleteTreeInternal(Buffer, 0LL, v9, 0);
            }
            ZwClose(v5[2].Buffer);
          }
          else
          {
            ExFreePoolWithTag(Buffer, 0);
          }
        }
        ExFreePoolWithTag(v5, 0);
      }
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 24), 0);
  }
  v2 = *(void **)(a1 + 16);
  if ( v2 )
    ZwClose(v2);
}
