/*
 * XREFs of ??0DXGSYNCOBJECT@@IEAA@PEAVDXGGLOBAL@@PEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@@Z @ 0x1C00F9C90
 * Callers:
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@_NPEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C00FA230 (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
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
  *((_QWORD *)this + 10) = 0LL;
  *((_DWORD *)this + 22) = 0;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *(_OWORD *)((char *)this + 168) = *(_OWORD *)&a3->Type;
  *(_OWORD *)((char *)this + 184) = *(_OWORD *)&a3->Reserved.Reserved[1];
  *(_OWORD *)((char *)this + 200) = *(_OWORD *)&a3->Reserved.Reserved[3];
  *(_OWORD *)((char *)this + 216) = *(_OWORD *)&a3->Reserved.Reserved[5];
  v3 = *(_OWORD *)&a3->Reserved.Reserved[7];
  *((_DWORD *)this + 62) = 0;
  *((_QWORD *)this + 32) = 0LL;
  *(_OWORD *)((char *)this + 232) = v3;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 13) = (char *)this + 96;
  *((_QWORD *)this + 12) = (char *)this + 96;
  return this;
}
