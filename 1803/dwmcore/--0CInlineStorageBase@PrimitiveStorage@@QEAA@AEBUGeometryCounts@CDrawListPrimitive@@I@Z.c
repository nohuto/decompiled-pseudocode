/*
 * XREFs of ??0CInlineStorageBase@PrimitiveStorage@@QEAA@AEBUGeometryCounts@CDrawListPrimitive@@I@Z @ 0x18008AF40
 * Callers:
 *     PrimitiveStorage::Alloc_16_ @ 0x18008ACAC (PrimitiveStorage--Alloc_16_.c)
 * Callees:
 *     <none>
 */

PrimitiveStorage::CInlineStorageBase *__fastcall PrimitiveStorage::CInlineStorageBase::CInlineStorageBase(
        PrimitiveStorage::CInlineStorageBase *this,
        const struct CDrawListPrimitive::GeometryCounts *a2)
{
  __int64 v2; // r10
  __int64 v3; // rax
  PrimitiveStorage::CInlineStorageBase *result; // rax
  __int128 v5; // [rsp+0h] [rbp-28h]
  __int128 v6; // [rsp+10h] [rbp-18h]

  v2 = *(unsigned int *)a2;
  *((_QWORD *)this + 1) = *(_QWORD *)a2;
  *(_QWORD *)&v5 = (char *)this
                 + (((((_BYTE)this + 104) & 0xF) + 15) & 0x10)
                 - (unsigned __int64)(((_BYTE)this + 104) & 0xF)
                 + 104;
  v3 = (unsigned int)(8 * v2 * (*((_DWORD *)a2 + 1) + 2));
  *((_QWORD *)&v5 + 1) = (((((_BYTE)v3 + (_BYTE)v5) & 0xF) + 15) & 0x10)
                       - (unsigned __int64)(((_BYTE)v3 + (_BYTE)v5) & 0xF)
                       + v3
                       + v5;
  *(_OWORD *)((char *)this + 24) = v5;
  *(_QWORD *)&v6 = ((((BYTE8(v5) + (_BYTE)v3) & 0xF) + 15) & 0x10)
                 - (unsigned __int64)((BYTE8(v5) + (_BYTE)v3) & 0xF)
                 + *((_QWORD *)&v5 + 1)
                 + (unsigned int)v3;
  *((_DWORD *)this + 4) = *((_DWORD *)a2 + 2);
  ++CHWDrawListEngineMetrics::s_cDrawListPrimitives;
  *((_QWORD *)&v6 + 1) = v6
                       + 8 * v2
                       + (((((_BYTE)v6 + 8 * (_BYTE)v2) & 0xF) + 15) & 0x10)
                       - (unsigned __int64)(((_BYTE)v6 + 8 * (_BYTE)v2) & 0xF);
  *(_QWORD *)this = &PrimitiveStorage::CEmptyStorage::`vftable';
  result = this;
  *(_OWORD *)((char *)this + 40) = v6;
  return result;
}
