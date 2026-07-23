/*
 * XREFs of sub_180040BCC @ 0x180040BCC
 * Callers:
 *     sub_180035838 @ 0x180035838 (sub_180035838.c)
 *     sub_18003697C @ 0x18003697C (sub_18003697C.c)
 *     sub_18005C0F4 @ 0x18005C0F4 (sub_18005C0F4.c)
 *     LdrLoadAlternateResourceModule @ 0x180084380 (LdrLoadAlternateResourceModule.c)
 * Callees:
 *     RtlGetThreadPreferredUILanguages @ 0x180040520 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpCreateProcessRegistryInfo @ 0x180040DB0 (RtlpCreateProcessRegistryInfo.c)
 */

char sub_180040BCC()
{
  char v0; // bl
  int v1; // eax
  __int64 v2; // r8
  struct _TEB *v3; // rcx
  int WowTebOffset; // eax
  struct _TEB *v5; // rdx
  __int64 v6; // rax
  bool v7; // zf
  struct _TEB *v8; // rcx
  __int64 v9; // rax
  ULONG MuiImpersonation; // eax
  struct _TEB *v12; // rcx
  int v13; // eax
  struct _TEB *v14; // rdx
  __int64 v15; // rax
  struct _TEB *v16; // rcx
  __int64 v17; // rax
  NTSTATUS ThreadPreferredUILanguages; // eax
  ULONG ReturnLength; // [rsp+30h] [rbp+8h] BYREF
  ULONG NumberOfLanguages; // [rsp+38h] [rbp+10h] BYREF
  __int64 v21; // [rsp+40h] [rbp+18h] BYREF

  v0 = 1;
  if ( !NtCurrentTeb()->MergedPrefLanguages || *((char *)NtCurrentTeb()->MergedPrefLanguages + 40) < 0 )
    goto LABEL_30;
  v21 = 0LL;
  v1 = RtlpCreateProcessRegistryInfo(&v21);
  v2 = 0LL;
  if ( v1 >= 0 )
    v2 = v21;
  if ( v2 )
  {
    if ( !*((_QWORD *)NtCurrentTeb()->MergedPrefLanguages + 2)
      || *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->MergedPrefLanguages + 2) + 12LL) == MEMORY[0x7FFE03A4]
      && NtCurrentTeb()->MuiGeneration == *(_DWORD *)(v2 + 16) )
    {
      v3 = NtCurrentTeb();
      WowTebOffset = v3->WowTebOffset;
      if ( WowTebOffset < 0 )
        LODWORD(v3) = WowTebOffset + (_DWORD)v3;
      v5 = NtCurrentTeb();
      v6 = v5->WowTebOffset;
      if ( (int)v6 < 0 )
        v5 = (struct _TEB *)((char *)v5 + v6);
      v7 = (_DWORD)v3 == LODWORD(v5->NtTib.SubSystemTib);
      v8 = NtCurrentTeb();
      v9 = v8->WowTebOffset;
      if ( v7 )
      {
        if ( (int)v9 < 0 )
          v8 = (struct _TEB *)((char *)v8 + v9);
        MuiImpersonation = HIDWORD(v8->glDispatchTable[186]);
      }
      else
      {
        if ( (int)v9 < 0 )
          v8 = (struct _TEB *)((char *)v8 + v9);
        MuiImpersonation = v8->MuiImpersonation;
      }
      if ( MuiImpersonation )
        return 1;
      if ( *(_WORD *)(*(_QWORD *)(v2 + 24) + 6LL) == 1 )
      {
        v12 = NtCurrentTeb();
        v13 = v12->WowTebOffset;
        if ( v13 < 0 )
          LODWORD(v12) = v13 + (_DWORD)v12;
        v14 = NtCurrentTeb();
        v15 = v14->WowTebOffset;
        if ( (int)v15 < 0 )
          v14 = (struct _TEB *)((char *)v14 + v15);
        v7 = (_DWORD)v12 == LODWORD(v14->NtTib.SubSystemTib);
        v16 = NtCurrentTeb();
        v17 = v16->WowTebOffset;
        if ( v7 )
        {
          if ( (int)v17 < 0 )
            v16 = (struct _TEB *)((char *)v16 + v17);
          HIDWORD(v16->glDispatchTable[186]) = 1;
        }
        else
        {
          if ( (int)v17 < 0 )
            v16 = (struct _TEB *)((char *)v16 + v17);
          v16->MuiImpersonation = 1;
        }
        return v0;
      }
    }
    else
    {
      *((_DWORD *)NtCurrentTeb()->MergedPrefLanguages + 10) = *((_DWORD *)NtCurrentTeb()->MergedPrefLanguages + 10) | 0x80;
    }
LABEL_30:
    ReturnLength = 0;
    ThreadPreferredUILanguages = RtlGetThreadPreferredUILanguages(0x30u, &NumberOfLanguages, 0LL, &ReturnLength);
    if ( (int)(ThreadPreferredUILanguages + 0x80000000) >= 0 && ThreadPreferredUILanguages != -1073741789
      || !NtCurrentTeb()->MergedPrefLanguages )
    {
      return 0;
    }
    return v0;
  }
  return 0;
}
