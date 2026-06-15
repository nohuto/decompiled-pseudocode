/*
 * XREFs of ??1?$vector@KV?$allocator@K@std@@@std@@QEAA@XZ @ 0x1800196B4
 * Callers:
 *     ??1ApplicationSpecificEndpointInfo@@UEAA@XZ @ 0x1800195B4 (--1ApplicationSpecificEndpointInfo@@UEAA@XZ.c)
 *     _CApplication::RegisterProcessWithApplicationSpecificEndpointInfo_::_1_::dtor$55 @ 0x180036D26 (_CApplication--RegisterProcessWithApplicationSpecificEndpointInfo_--_1_--dtor$55.c)
 * Callees:
 *     <none>
 */

void __fastcall std::vector<unsigned long>::~vector<unsigned long>(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v4; // rbx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax
  HANDLE ProcessHeap; // rax

  v4 = *(void **)a1;
  if ( *(_QWORD *)a1 )
  {
    v6 = (__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v4) >> 2;
    if ( v6 <= 0x3FFFFFFFFFFFFFFFLL )
    {
      if ( 4 * v6 < 0x1000 )
      {
LABEL_8:
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, v4);
        *(_QWORD *)a1 = 0LL;
        *(_QWORD *)(a1 + 8) = 0LL;
        *(_QWORD *)(a1 + 16) = 0LL;
        return;
      }
      if ( ((unsigned __int8)v4 & 0x1F) == 0 )
      {
        v7 = *((_QWORD *)v4 - 1);
        if ( v7 < (unsigned __int64)v4 && (unsigned __int64)v4 - v7 - 8 <= 0x1F )
        {
          v4 = (void *)*((_QWORD *)v4 - 1);
          goto LABEL_8;
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(0x3FFFFFFFFFFFFFFFLL, a2, a3, a4);
    JUMPOUT(0x180019740LL);
  }
}
