/*
 * XREFs of ??_EVIDMM_DEVICE_PAGING_QUEUE@@QEAAPEAXI@Z @ 0x1C00023DC
 * Callers:
 *     ??1VIDMM_DEVICE@@QEAA@XZ @ 0x1C004CD60 (--1VIDMM_DEVICE@@QEAA@XZ.c)
 * Callees:
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C000241C (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 */

char *__fastcall VIDMM_DEVICE_PAGING_QUEUE::`vector deleting destructor'(VIDMM_DEVICE_PAGING_QUEUE *this)
{
  char *v1; // rbx

  v1 = (char *)this - 8;
  `vector destructor iterator'(
    this,
    0xA0uLL,
    *((_QWORD *)this - 1),
    (void (*)(void *))VIDMM_DEVICE_PAGING_QUEUE::~VIDMM_DEVICE_PAGING_QUEUE);
  if ( v1 )
    ExFreePoolWithTag(v1, 0);
  return v1;
}
