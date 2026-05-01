/*
 * XREFs of ?RmpSystemDereferenceHostWithPsm@@YAXPEAU_RM_ACTIVITY_HOST@@PEAX@Z @ 0x18001AA50
 * Callers:
 *     ?RmpActivityHostRemoveFromTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001A848 (-RmpActivityHostRemoveFromTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180026AD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall RmpSystemDereferenceHostWithPsm(struct _RM_ACTIVITY_HOST *a1, void *a2)
{
  struct _RM_ACTIVITY_HOST *v3; // rdx
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // [rsp+38h] [rbp-19h] BYREF
  struct _RM_ACTIVITY_HOST *v7; // [rsp+40h] [rbp-11h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+58h] [rbp+7h] BYREF
  void *v10; // [rsp+68h] [rbp+17h]
  int v11; // [rsp+70h] [rbp+1Fh]
  int v12; // [rsp+74h] [rbp+23h]
  __int64 *v13; // [rsp+78h] [rbp+27h]
  int v14; // [rsp+80h] [rbp+2Fh]
  int v15; // [rsp+84h] [rbp+33h]
  struct _RM_ACTIVITY_HOST **v16; // [rsp+88h] [rbp+37h]
  int v17; // [rsp+90h] [rbp+3Fh]
  int v18; // [rsp+94h] [rbp+43h]

  v3 = a1;
  v4 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 56LL);
  if ( hProvider > 4u && (qword_1800670D0 & 1) != 0 && (qword_1800670D8 & 1) == qword_1800670D8 )
  {
    v5 = *((_QWORD *)a1 + 3);
    v15 = 0;
    v18 = 0;
    v6 = v5;
    v13 = &v6;
    v16 = &v7;
    v14 = 8;
    v7 = a1;
    v17 = 8;
    *(_DWORD *)&EventDescriptor.Level = 4;
    v9.Ptr = (ULONGLONG)off_1800670C8;
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_18005A4BF - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    EventDescriptor.Keyword = 1LL;
    v9.Size = *(unsigned __int16 *)off_1800670C8;
    v10 = &unk_18005A4CA;
    v12 = 1;
    v9.Reserved = 2;
    v11 = 39;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 4u, &v9);
  }
  (*(void (__fastcall **)(void *, struct _RM_ACTIVITY_HOST *))(v4 + 224))(a2, v3);
}
