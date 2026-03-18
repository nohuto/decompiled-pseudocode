/*
 * XREFs of bFreeDCAttributesWorker @ 0x1C002BBD0
 * Callers:
 *     ?bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z @ 0x1C003F66C (-bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z.c)
 * Callees:
 *     HmgFreeDcAttr @ 0x1C002BCB0 (HmgFreeDcAttr.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C0033040 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 */

__int64 __fastcall bFreeDCAttributesWorker(struct OBJECT *a1)
{
  struct OBJECT *v1; // rdx
  char *v2; // rsi
  unsigned int v3; // edi
  __int64 v5; // r8
  _OWORD *v6; // rax
  _OWORD *v7; // rcx
  __int128 v8; // xmm1
  struct OBJECT *v9; // rcx

  v1 = (struct OBJECT *)*((_QWORD *)a1 + 10);
  v2 = (char *)a1 + 560;
  v3 = 0;
  if ( v1 != (struct OBJECT *)((char *)a1 + 560) )
  {
    v5 = 3LL;
    v6 = (_OWORD *)((char *)a1 + 560);
    v7 = (_OWORD *)*((_QWORD *)a1 + 10);
    do
    {
      *v6 = *v7;
      v6[1] = v7[1];
      v6[2] = v7[2];
      v6[3] = v7[3];
      v6[4] = v7[4];
      v6[5] = v7[5];
      v6[6] = v7[6];
      v6 += 8;
      v8 = v7[7];
      v7 += 8;
      *(v6 - 1) = v8;
      --v5;
    }
    while ( v5 );
    *v6 = *v7;
    v6[1] = v7[1];
    if ( v1 == (struct OBJECT *)((char *)a1 + 984) )
      v9 = (struct OBJECT *)*((_QWORD *)a1 + 122);
    else
      v9 = v1;
    HmgFreeDcAttr(v9);
    *((_QWORD *)a1 + 10) = v2;
    *((_QWORD *)GdiHandleManager::GetEntryFromObject(gpHandleManager, a1) + 2) = 0LL;
    return 1;
  }
  return v3;
}
