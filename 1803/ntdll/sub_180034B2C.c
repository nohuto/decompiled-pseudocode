/*
 * XREFs of sub_180034B2C @ 0x180034B2C
 * Callers:
 *     sub_180032DB4 @ 0x180032DB4 (sub_180032DB4.c)
 *     sub_180033EB8 @ 0x180033EB8 (sub_180033EB8.c)
 *     sub_180053480 @ 0x180053480 (sub_180053480.c)
 *     LdrLoadAlternateResourceModule @ 0x18007D9F0 (LdrLoadAlternateResourceModule.c)
 * Callees:
 *     RtlGetThreadPreferredUILanguages @ 0x180032530 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpCreateProcessRegistryInfo @ 0x180034D10 (RtlpCreateProcessRegistryInfo.c)
 */

char sub_180034B2C()
{
  char v0; // bl
  int v1; // eax
  __int64 v2; // r9
  struct _TEB *v3; // rdx
  int WowTebOffset; // eax
  struct _TEB *v5; // r8
  __int64 v6; // rax
  struct _TEB *v7; // rcx
  __int64 v8; // rax
  ULONG MuiImpersonation; // eax
  NTSTATUS ThreadPreferredUILanguages; // eax
  struct _TEB *v12; // rdx
  int v13; // eax
  struct _TEB *v14; // r8
  __int64 v15; // rax
  struct _TEB *v16; // rcx
  __int64 v17; // rax
  ULONG ReturnLength; // [rsp+30h] [rbp+8h] BYREF
  ULONG NumberOfLanguages; // [rsp+38h] [rbp+10h] BYREF
  __int64 v20; // [rsp+40h] [rbp+18h] BYREF

  v0 = 1;
  if ( !NtCurrentTeb()->MergedPrefLanguages || *((char *)NtCurrentTeb()->MergedPrefLanguages + 40) < 0 )
    goto LABEL_20;
  v20 = 0LL;
  v1 = RtlpCreateProcessRegistryInfo(&v20);
  v2 = 0LL;
  if ( v1 >= 0 )
    v2 = v20;
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
      v7 = NtCurrentTeb();
      v8 = v7->WowTebOffset;
      if ( (_DWORD)v3 == LODWORD(v5->NtTib.SubSystemTib) )
      {
        if ( (int)v8 < 0 )
          v7 = (struct _TEB *)((char *)v7 + v8);
        MuiImpersonation = HIDWORD(v7->glDispatchTable[186]);
      }
      else
      {
        if ( (int)v8 < 0 )
          v7 = (struct _TEB *)((char *)v7 + v8);
        MuiImpersonation = v7->MuiImpersonation;
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
        v16 = NtCurrentTeb();
        v17 = v16->WowTebOffset;
        if ( (_DWORD)v12 == LODWORD(v14->NtTib.SubSystemTib) )
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
LABEL_20:
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
