/*
 * XREFs of PiDevCfgFreeResolveContext @ 0x140593004
 * Callers:
 *     PiDevCfgConfigureDeviceKeys @ 0x140592E90 (PiDevCfgConfigureDeviceKeys.c)
 *     PiDevCfgInitResolveContext @ 0x140593494 (PiDevCfgInitResolveContext.c)
 *     PiDevCfgVerifyDeviceAllowed @ 0x1405946CC (PiDevCfgVerifyDeviceAllowed.c)
 * Callees:
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     RtlFreeUnicodeString @ 0x140541820 (RtlFreeUnicodeString.c)
 *     _RegRtlDeleteTreeInternal @ 0x1405AA1FC (_RegRtlDeleteTreeInternal.c)
 */

void __fastcall PiDevCfgFreeResolveContext(__int64 a1)
{
  void *v2; // rcx
  unsigned int v3; // esi
  __int64 v4; // r14
  UNICODE_STRING **v5; // rdx
  UNICODE_STRING *v6; // rbx
  UNICODE_STRING *v7; // rax
  wchar_t *Buffer; // rcx
  int v9; // edx
  __int64 v10; // r8

  if ( *(_QWORD *)(a1 + 24) )
  {
    v3 = 0;
    v4 = 0LL;
    do
    {
      while ( 1 )
      {
        v5 = (UNICODE_STRING **)(v4 + *(_QWORD *)(a1 + 24));
        if ( *v5 == (UNICODE_STRING *)v5 )
          break;
        v6 = *v5;
        v7 = *(UNICODE_STRING **)&(*v5)->Length;
        if ( (UNICODE_STRING **)(*v5)->Buffer != v5 || (UNICODE_STRING *)v7->Buffer != v6 )
          __fastfail(3u);
        *v5 = v7;
        v7->Buffer = (wchar_t *)v5;
        RtlFreeUnicodeString(v6 + 1);
        Buffer = v6[2].Buffer;
        if ( Buffer )
        {
          v9 = *(_DWORD *)&v6[2].Length;
          if ( (_WORD)v9 == 0x8000 )
          {
            if ( (v9 & 0x100000) != 0 )
            {
              if ( *(_QWORD *)&PiPnpRtlCtx && **(_QWORD **)&PiPnpRtlCtx )
                v10 = *(_QWORD *)(**(_QWORD **)&PiPnpRtlCtx + 8LL);
              else
                v10 = 0LL;
              RegRtlDeleteTreeInternal(Buffer, 0LL, v10, 0LL);
            }
            ZwClose(v6[2].Buffer);
          }
          else
          {
            ExFreePoolWithTag(Buffer, 0);
          }
        }
        ExFreePoolWithTag(v6, 0);
      }
      ++v3;
      v4 += 16LL;
    }
    while ( v3 < 0x7F );
    ExFreePoolWithTag(*(PVOID *)(a1 + 24), 0);
  }
  v2 = *(void **)(a1 + 16);
  if ( v2 )
    ZwClose(v2);
}
