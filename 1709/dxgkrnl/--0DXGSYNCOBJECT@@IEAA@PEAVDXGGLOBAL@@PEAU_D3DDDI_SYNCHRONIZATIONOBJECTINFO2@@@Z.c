/*
 * XREFs of ??0DXGSYNCOBJECT@@IEAA@PEAVDXGGLOBAL@@PEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@@Z @ 0x1C008B7A0
 * Callers:
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@_NPEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C008BE80 (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 * Callees:
 *     <none>
 */

DXGSYNCOBJECT *__fastcall DXGSYNCOBJECT::DXGSYNCOBJECT(
        DXGSYNCOBJECT *this,
        struct DXGGLOBAL *a2,
        struct _D3DDDI_SYNCHRONIZATIONOBJECTINFO2 *a3)
{
  __int128 v3; // xmm0

  *((_QWORD *)this + 2) = a2;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_DWORD *)this + 6) = 0;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 14) = 0;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 15) = 33;
  *((_DWORD *)this + 16) = 32;
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 20) = 0;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_OWORD *)this + 10) = *(_OWORD *)&a3->Type;
  *((_OWORD *)this + 11) = *(_OWORD *)&a3->Reserved.Reserved[1];
  *((_OWORD *)this + 12) = *(_OWORD *)&a3->Reserved.Reserved[3];
  *((_OWORD *)this + 13) = *(_OWORD *)&a3->Reserved.Reserved[5];
  v3 = *(_OWORD *)&a3->Reserved.Reserved[7];
  *((_WORD *)this + 120) = 0;
  *((_BYTE *)this + 242) = 0;
  *((_OWORD *)this + 14) = v3;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 12) = (char *)this + 88;
  *((_QWORD *)this + 11) = (char *)this + 88;
  return this;
}
