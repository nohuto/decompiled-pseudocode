/*
 * XREFs of ?OnProcessCreation@CChannel@DirectComposition@@SAJPEAVCProcessData@2@@Z @ 0x1C0024CB0
 * Callers:
 *     ?OnProcessCreation@CProcessData@DirectComposition@@SAJPEAU_W32PROCESS@@@Z @ 0x1C0023B0C (-OnProcessCreation@CProcessData@DirectComposition@@SAJPEAU_W32PROCESS@@@Z.c)
 * Callees:
 *     Win32AllocPoolNonPaged @ 0x1C0024C70 (Win32AllocPoolNonPaged.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0026FA0 (Win32AllocPoolWithQuotaZInit.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 */

__int64 __fastcall DirectComposition::CChannel::OnProcessCreation(struct DirectComposition::CProcessData *a1)
{
  struct _ERESOURCE *v2; // rdi
  struct _RTL_GENERIC_TABLE *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  struct _RTL_GENERIC_TABLE *v6; // rsi
  NTSTATUS v7; // ebx
  struct _ERESOURCE *v8; // rax
  __int64 result; // rax

  v2 = 0LL;
  v3 = (struct _RTL_GENERIC_TABLE *)Win32AllocPoolWithQuotaZInit(0x48uLL);
  v6 = v3;
  if ( v3 )
    RtlInitializeGenericTable(
      v3,
      DirectComposition::CGenericTable<unsigned int,DirectComposition::CChannel,1952662340,1>::CompareTableEntries,
      DirectComposition::CGenericTable<unsigned int,DirectComposition::CChannel,1952662340,1>::AllocateTableEntry,
      rimUserMemAllocNodeFree,
      0LL);
  else
    v6 = 0LL;
  v7 = v6 == 0LL ? 0xC0000017 : 0;
  if ( v6 )
  {
    v8 = (struct _ERESOURCE *)Win32AllocPoolNonPaged(104LL, 0x73634344u);
    v2 = v8;
    if ( v8 )
      memset(v8, 0, sizeof(struct _ERESOURCE));
    else
      v2 = 0LL;
    if ( !v2 )
      v7 = -1073741801;
  }
  if ( v7 < 0 || (v7 = ExInitializeResourceLite(v2), v7 < 0) )
  {
    if ( v6 )
    {
      Win32FreePool(v6, v4, v5);
      v6 = 0LL;
    }
    if ( v2 )
    {
      Win32FreePool(v2, v4, v5);
      v2 = 0LL;
    }
  }
  result = (unsigned int)v7;
  *(_QWORD *)a1 = v6;
  *((_QWORD *)a1 + 1) = v2;
  return result;
}
