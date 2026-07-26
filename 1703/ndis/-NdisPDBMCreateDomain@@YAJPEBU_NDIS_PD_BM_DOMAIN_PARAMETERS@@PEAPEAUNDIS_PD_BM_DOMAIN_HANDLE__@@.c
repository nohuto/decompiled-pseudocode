/*
 * XREFs of ?NdisPDBMCreateDomain@@YAJPEBU_NDIS_PD_BM_DOMAIN_PARAMETERS@@PEAPEAUNDIS_PD_BM_DOMAIN_HANDLE__@@@Z @ 0x1C00EFC80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NdisPDBMCreateDomain(
        const struct _NDIS_PD_BM_DOMAIN_PARAMETERS *a1,
        struct NDIS_PD_BM_DOMAIN_HANDLE__ **a2)
{
  struct NDIS_PD_BM_DOMAIN_HANDLE__ *PoolWithTag; // rax
  struct NDIS_PD_BM_DOMAIN_HANDLE__ *v5; // rdx

  *a2 = 0LL;
  if ( a1->Header.Type != 0x80 || a1->Header.Revision != 1 || a1->Header.Size < 8u || (a1->Flags & 0xFFFFFFFE) != 0 )
    return 3221225485LL;
  PoolWithTag = (struct NDIS_PD_BM_DOMAIN_HANDLE__ *)ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x6D41444Eu);
  v5 = PoolWithTag;
  if ( PoolWithTag )
  {
    *(_QWORD *)PoolWithTag = 0LL;
    *((_WORD *)PoolWithTag + 12) = 0;
    *((_DWORD *)PoolWithTag + 7) = 0;
    *((_QWORD *)PoolWithTag + 2) = PoolWithTag + 2;
    *((_QWORD *)PoolWithTag + 1) = PoolWithTag + 2;
  }
  else
  {
    v5 = 0LL;
  }
  if ( !v5 )
    return 3221225626LL;
  if ( (a1->Flags & 1) != 0 )
    *((_BYTE *)v5 + 24) = 1;
  *a2 = v5;
  return 0LL;
}
